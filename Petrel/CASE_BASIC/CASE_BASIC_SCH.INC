-- Generated [
-- Format      : ECLIPSE keywords (ASCII)
-- Exported by : Petrel 2017.4 Schlumberger
-- User name   : user
-- Date        : Wednesday, January 04 2023 02:14:45
-- Project     : alyani_400134038.pet
-- Generated ]

RPTSCHED                               -- Generated : Petrel
  PRES FIP=3 WELLS=5 CPU AQUCT=2 NEWTON PRESD PWATD PGASD OWC GOCDIFF ODGAS ODWAT GDOWAT FIPTR=2 PBLK PLYADS RK FIPSALT=2 ROCKC
  SURFBLK TRADS PB PD MULT FIPTEMP=2 POTC RECOV FLOOIL FLOWAT FLOGAS FLOSOL KRN BFORG FFORG GASSATC SIGM_MOD /

SKIP                                   -- Generated : Petrel
--Hint: Drag producers into PROD FOLDER, injectors into INJ FOLDER, set target Field production rate in Group rate production control rule, check the production BHP limit in Well pressure production control rule and set injection BHP limit in Well water injection control rule.

ENDSKIP                                -- Generated : Petrel

--Hint: Drag producers into PROD FOLDER, injectors into INJ FOLDER, set target Field production rate in Group rate production control rule, check the production BHP limit in Well pressure production control rule and set injection BHP limit in Well water injection control rule.


--Hint: Drag producers into PROD FOLDER, injectors into INJ FOLDER, set target Field production rate in Group rate production control rule, check the production BHP limit in Well pressure production control rule and set injection BHP limit in Well water injection control rule.


WELSPECS                               -- Generated : Petrel
--'P4' is the simulation well name used to describe flow from 'p4;Tubing 1'
--'P2' is the simulation well name used to describe flow from 'p2;Tubing 1'
--'P3' is the simulation well name used to describe flow from 'p3;Tubing 1'
--'P1' is the simulation well name used to describe flow from 'p1;Tubing 1'
--
  P4 'GROUP 1' 39 12 1* OIL /
  P2 'GROUP 1' 11 12 1* OIL /
  P3 'GROUP 1' 39 43 1* OIL /
  P1 'GROUP 1' 11 43 1* OIL /
  /

COMPDAT                                -- Generated : Petrel
  P4 39 12 1 1 OPEN 1* 2.64814 0.625 1810.58 0 1* Z 39.6013 /
  P4 39 12 2 2 OPEN 1* 2.75433 0.625 1883.2 0 1* Z 39.6019 /
  P4 39 12 3 3 OPEN 1* 1.24296 0.625 849.842 0 1* Z 39.6024 /
  P2 11 12 1 1 OPEN 1* 2.53969 0.625 1736.44 0 1* Z 39.6024 /
  P2 11 12 2 2 OPEN 1* 2.59149 0.625 1771.87 0 1* Z 39.6031 /
  P2 11 12 3 3 OPEN 1* 1.13452 0.625 775.705 0 1* Z 39.6039 /
  P3 39 43 1 1 OPEN 1* 2.79091 0.625 1908.2 0 1* Z 39.6021 /
  P3 39 43 2 2 OPEN 1* 2.79067 0.625 1908.05 0 1* Z 39.6028 /
  P3 39 43 3 3 OPEN 1* 1.26211 0.625 862.935 0 1* Z 39.6035 /
  P1 11 43 1 1 OPEN 1* 2.59027 0.625 1771.04 0 1* Z 39.6045 /
  P1 11 43 2 2 OPEN 1* 2.6744 0.625 1828.58 0 1* Z 39.6055 /
  P1 11 43 3 3 OPEN 1* 1.20944 0.625 826.939 0 1* Z 39.6067 /
  /

--Hint: Drag producers into PROD FOLDER, injectors into INJ FOLDER, set target Field production rate in Group rate production control rule, check the production BHP limit in Well pressure production control rule and set injection BHP limit in Well water injection control rule.


--Hint: Drag producers into PROD FOLDER, injectors into INJ FOLDER, set target Field production rate in Group rate production control rule, check the production BHP limit in Well pressure production control rule and set injection BHP limit in Well water injection control rule.


--Hint: Drag producers into PROD FOLDER, injectors into INJ FOLDER, set target Field production rate in Group rate production control rule, check the production BHP limit in Well pressure production control rule and set injection BHP limit in Well water injection control rule.


--Hint: Drag producers into PROD FOLDER, injectors into INJ FOLDER, set target Field production rate in Group rate production control rule, check the production BHP limit in Well pressure production control rule and set injection BHP limit in Well water injection control rule.


--Hint: Drag producers into PROD FOLDER, injectors into INJ FOLDER, set target Field production rate in Group rate production control rule, check the production BHP limit in Well pressure production control rule and set injection BHP limit in Well water injection control rule.


--Hint: Drag producers into PROD FOLDER, injectors into INJ FOLDER, set target Field production rate in Group rate production control rule, check the production BHP limit in Well pressure production control rule and set injection BHP limit in Well water injection control rule.


--Hint: Drag producers into PROD FOLDER, injectors into INJ FOLDER, set target Field production rate in Group rate production control rule, check the production BHP limit in Well pressure production control rule and set injection BHP limit in Well water injection control rule.


--Hint: Drag producers into PROD FOLDER, injectors into INJ FOLDER, set target Field production rate in Group rate production control rule, check the production BHP limit in Well pressure production control rule and set injection BHP limit in Well water injection control rule.


--Hint: Drag producers into PROD FOLDER, injectors into INJ FOLDER, set target Field production rate in Group rate production control rule, check the production BHP limit in Well pressure production control rule and set injection BHP limit in Well water injection control rule.


--Hint: Drag producers into PROD FOLDER, injectors into INJ FOLDER, set target Field production rate in Group rate production control rule, check the production BHP limit in Well pressure production control rule and set injection BHP limit in Well water injection control rule.


--Hint: Drag producers into PROD FOLDER, injectors into INJ FOLDER, set target Field production rate in Group rate production control rule, check the production BHP limit in Well pressure production control rule and set injection BHP limit in Well water injection control rule.


GRUPTREE                               -- Generated : Petrel
  'GROUP 1' FIELD /
  /

GCONPROD                               -- Generated : Petrel
  FIELD NONE /
  /

GCONINJE                               -- Generated : Petrel
  FIELD WATER VREP 1* 1* 1* 1 /
  /

WCONPROD                               -- Generated : Petrel
  P4 1* BHP 5* 1350 /
  P2 1* BHP 5* 1350 /
  P3 1* BHP 5* 1350 /
  P1 1* BHP 5* 1350 /
  /

WECON                                  -- Generated : Petrel
  P4 1* 1* 0.85 1* 1* WELL /
  P2 1* 1* 0.85 1* 1* WELL /
  P3 1* 1* 0.85 1* 1* WELL /
  P1 1* 1* 0.85 1* 1* WELL /
  /

DATES                                  -- Generated : Petrel
  1 JAN 2023 /
  /

DATES                                  -- Generated : Petrel
  1 JAN 2024 /
  /

DATES                                  -- Generated : Petrel
  1 JAN 2024 '06:00:00' /
  /

WELSPECS                               -- Generated : Petrel
--'I1' is the simulation well name used to describe flow from 'i1'
--
  I1 'GROUP 1' 23 23 1* WATER /
  /

COMPDAT                                -- Generated : Petrel
  I1 23 23 1 1 OPEN 1* 2.47741 0.625 1693.83 0 1* Z 39.5985 /
  I1 23 23 2 2 OPEN 1* 2.47738 0.625 1693.81 0 1* Z 39.5986 /
  I1 23 23 3 3 OPEN 1* 1.12049 0.625 766.093 0 1* Z 39.5987 /
  I1 23 23 4 4 OPEN 1* 1.12048 0.625 766.083 0 1* Z 39.5988 /
  I1 23 23 5 5 OPEN 1* 1.15635 0.625 790.606 0 1* Z 39.599 /
  I1 23 23 6 6 OPEN 1* 1.15633 0.625 790.594 0 1* Z 39.5991 /
  I1 23 23 7 7 OPEN 1* 0.901588 0.625 616.426 0 1* Z 39.5992 /
  I1 23 23 8 8 OPEN 1* 0.901569 0.625 616.413 0 1* Z 39.5993 /
  I1 23 23 9 9 OPEN 1* 0.779886 0.625 533.218 0 1* Z 39.5995 /
  I1 23 23 10 10 OPEN 1* 0.779866 0.625 533.204 0 1* Z 39.5996 /
  /

WCONINJE                               -- Generated : Petrel
  I1 WATER 1* RATE 2000 1* 5600 /
  /

DATES                                  -- Generated : Petrel
  1 JAN 2025 /
  /

DATES                                  -- Generated : Petrel
  1 JAN 2026 /
  /

DATES                                  -- Generated : Petrel
  1 JAN 2027 /
  /

