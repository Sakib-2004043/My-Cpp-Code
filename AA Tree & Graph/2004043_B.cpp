CREATE TABLE Administrator (
  Admin_ID INT PRIMARY KEY,
  Name VARCHAR(50),
  Password VARCHAR(50)
);

CREATE TABLE Water_Logging_Incident (
  Incident_ID INT PRIMARY KEY,
  Date DATE,
  Incident_Severity VARCHAR(20),
  Admin_ID INT,
  FOREIGN KEY (Admin_ID) REFERENCES Administrator(Admin_ID) ON UPDATE CASCADE ON DELETE CASCADE
);

CREATE TABLE Water_Alert (
  Alert_ID INT PRIMARY KEY,
  Incident_ID INT,
  Date DATE,
  FOREIGN KEY (Incident_ID) REFERENCES Water_Logging_Incident(Incident_ID) ON UPDATE CASCADE ON DELETE CASCADE
);

CREATE TABLE End_User (
  User_ID INT PRIMARY KEY,
  First_Name VARCHAR(50),
  Middle_Name VARCHAR(50),
  Last_Name VARCHAR(50),
  Password VARCHAR(50)
);

CREATE TABLE Water_Alert_End_User (
  W_AlertID INT,
  W_User_ID INT,
  PRIMARY KEY(W_AlertID,W_User_ID),
  FOREIGN KEY(W_AlertID) REFERENCES Water_Alert(Alert_ID)ON UPDATE CASCADE ON DELETE CASCADE,
  FOREIGN KEY(W_User_ID) REFERENCES End_User(User_ID)ON UPDATE CASCADE ON DELETE CASCADE
);

CREATE TABLE User_Phone (
  P_User_ID INT,
  Phone_Number VARCHAR(20),
  PRIMARY KEY (P_User_ID, Phone_Number),
  FOREIGN KEY(P_User_ID) REFERENCES End_User(User_ID)ON UPDATE CASCADE ON DELETE CASCADE

);

CREATE TABLE Water_Logging_Report (
  Report_ID INT PRIMARY KEY,
  Report_Date DATE,
  User_ID INT,
  FOREIGN KEY (User_ID) REFERENCES End_User(User_ID)ON UPDATE CASCADE ON DELETE CASCADE
);

CREATE TABLE Location (
  Location_ID INT PRIMARY KEY,
  Longitude VARCHAR(50),
  Latitude VARCHAR(50),
  Location_Name VARCHAR(50)
);


CREATE TABLE Rainfall_Data (
  Rainfall_Data_ID INT PRIMARY KEY,
  Rainfall_Date DATE,
  Precipitation FLOAT,
  Location_ID INT,
  FOREIGN KEY (Location_ID) REFERENCES Location(Location_ID)ON UPDATE CASCADE ON DELETE CASCADE
);

CREATE TABLE Impact (
  I_Rainfall_Data_ID INT,
  I_Location_ID INT,
  I_Incident_ID INT,
  PRIMARY KEY(I_Rainfall_Data_ID,I_Location_ID,I_Incident_ID),
  FOREIGN KEY(I_Rainfall_Data_ID) REFERENCES Rainfall_Data(Rainfall_Data_ID)ON UPDATE CASCADE ON DELETE CASCADE,
  FOREIGN KEY(I_Location_ID) REFERENCES Location(Location_ID)ON UPDATE CASCADE ON DELETE CASCADE,
  FOREIGN KEY(I_Incident_ID) REFERENCES Water_Logging_Incident(Incident_ID)ON UPDATE CASCADE ON DELETE CASCADE

);

CREATE TABLE Drainage_System (
  Drain_ID INT PRIMARY KEY,
  Type VARCHAR(50),
  Capacity INT,
  Condition_ VARCHAR(50),
  Location_ID INT,
  FOREIGN KEY (Location_ID) REFERENCES Location(Location_ID)ON UPDATE CASCADE ON DELETE CASCADE
);

CREATE TABLE Flood_Sensor (
  Sensor_ID INT PRIMARY KEY,
  Sensor_Data VARCHAR(50)
);

CREATE TABLE Located_At (
  A_Sensor_ID INT,
  A_Location_ID INT,
  PRIMARY KEY (A_Sensor_ID, A_Location_ID),
  FOREIGN KEY (A_Location_ID) REFERENCES Location(Location_ID)ON UPDATE CASCADE ON DELETE CASCADE,
  FOREIGN KEY (A_Sensor_ID) REFERENCES Flood_Sensor(Sensor_ID)ON UPDATE CASCADE ON DELETE CASCADE

);

CREATE TABLE Maintenance_Records (
  Maintenance_ID INT PRIMARY KEY,
  Maintenance_Details VARCHAR(50),
  Date DATE,
  Drain_ID INT,
  FOREIGN KEY (Drain_ID) REFERENCES Drainage_System(Drain_ID)ON UPDATE CASCADE ON DELETE CASCADE
);
