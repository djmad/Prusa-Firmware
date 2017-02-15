<<<<<<< HEAD
/**
 * German
 *
 * LCD Menu Messages
 * Please note these are limited to 17 characters!
 *
 */

#define(length=20) WELCOME_MSG              CUSTOM_MENDEL_NAME " klar."
#define MSG_SD_INSERTED                     "SD eingesetzt"
#define MSG_SD_REMOVED                      "SD entfernt "
#define MSG_MAIN                            "Hauptmenue"
#define(length=20) MSG_DISABLE_STEPPERS     "Deaktiviere Motoren"
#define MSG_AUTO_HOME                       "Startposition"
#define MSG_SET_HOME_OFFSETS                "Set home offsets"
#define MSG_SET_ORIGIN                      "Set origin"
#define MSG_COOLDOWN                        "Abkuehlen"
#define MSG_SWITCH_PS_ON                    "Schalte EIN"
#define MSG_SWITCH_PS_OFF                   "Schalte AUS"
#define MSG_MOVE_AXIS                       "Bewege Achse"
#define MSG_MOVE_X                          "Bewege X"
#define MSG_MOVE_Y                          "Bewege Y"
#define MSG_MOVE_Z                          "Bewege Z"
#define MSG_MOVE_E                          "Extruder"
#define MSG_SPEED                           "Geschwindigkeit"
#define MSG_NOZZLE                          "Duese"
#define MSG_NOZZLE1                         "Duese2"
#define MSG_NOZZLE2                         "Duese3"
#define MSG_BED                             "Bed"
#define(length=15) MSG_FAN_SPEED          	"Lueftergeschw."
#define MSG_FLOW                            "Durchfluss"
#define MSG_FLOW0                           "Durchfluss 0"
#define MSG_FLOW1                           "Durchfluss 1"
#define MSG_FLOW2                           "Durchfluss 2"
#define MSG_CONTROL                         "Control"
#define MSG_MIN                             " \002 Min"
#define MSG_MAX                             " \002 Max"
#define MSG_FACTOR                          " \002 Fact"
#define MSG_TEMPERATURE                     "Temperatur"
#define MSG_MOTION                          "Motion"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED		        "E in mm3"
#define MSG_STORE_EPROM                     "Speichern in EPROM"
#define MSG_LOAD_EPROM                      "Lade Speicher"
#define MSG_RESTORE_FAILSAFE                "Restore failsafe"
#define MSG_REFRESH                         "\xF8" "Refresh"
#define MSG_WATCH                           "Information"
#define MSG_TUNE                            "Feineinstellen"
#define MSG_PAUSE_PRINT                     "Pause"
#define MSG_RESUME_PRINT                    "Fortsetzen"
#define MSG_STOP_PRINT                      "Druck stoppen"
#define MSG_CARD_MENU                       "Druck von SD"
#define MSG_NO_CARD                         "Keine SD Karte"
#define MSG_DWELL                           "Schlaf..."
#define(length=20) MSG_USERWAIT             "Warte auf user..."
#define(length=20, lines=2) MSG_RESUMING	"Druck wird fortgesetzt"
#define(length=20) MSG_PRINT_ABORTED        "Druck abgebrochen"
#define MSG_NO_MOVE                         "Keine Bewegung."
#define(length=20) MSG_KILLED               "NOTSTOPP/KILLED. "
#define MSG_STOPPED                         "GESTOPPT. "
#define MSG_FILAMENTCHANGE                  "Wechsel filament"
#define MSG_INIT_SDCARD                     "Init. SD card"
#define MSG_CNG_SDCARD                      "Wechsel SD Karte"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Live Z einstellen"
#define(length=20) MSG_ADJUSTZ				"Auto Z einstellen?"
#define(length=20) MSG_PICK_Z				"Waehle Druck"
#define MSG_SETTINGS                        "Einstellungen"
#define MSG_PREHEAT                         "Vorheizen"
#define MSG_UNLOAD_FILAMENT                 "Entnehme Filament"
#define MSG_LOAD_FILAMENT                   "Lade Filament"

#define MSG_RECTRACT                        "Rectract"
#define MSG_ERROR							"FEHLER:"
#define(length=20) MSG_PREHEAT_NOZZLE       "Duese vorheizen!"
#define MSG_SUPPORT							"Support"
#define(length=20) MSG_CORRECTLY			"Wechsel ok?"
#define MSG_YES								"Ja"
#define MSG_NO								"Nein"
#define(length=20) MSG_NOT_LOADED 			"Fil. nicht geladen"
#define(length=20) MSG_NOT_COLOR 			"Farbe nicht klar."
#define(length=20) MSG_LOADING_FILAMENT		"Lade filament"
#define(length=20) MSG_PLEASE_WAIT			"Bitte warten"
#define MSG_LOADING_COLOR					"Lade Farbe"
#define(length=20) MSG_CHANGE_SUCCESS		"Wechsel erfolgreich!"
#define(length=20) MSG_PRESS				"und Knopf druecken"
#define(length=20) MSG_INSERT_FILAMENT		"Filament einlegen"
#define(length=20) MSG_CHANGING_FILAMENT	"Wechsel filament!"


#define MSG_SILENT_MODE_ON					"Mode      [leise]"
#define MSG_SILENT_MODE_OFF					"Mode [high power]" 
#define(length=20) MSG_REBOOT				"Reboot den Drucker"
#define(length=20, lines=2) MSG_TAKE_EFFECT	" um wirksam zu werden"											

#define MSG_Enqueing                        "enqueing \""
#define MSG_POWERUP                         "PowerUp"
#define MSG_CONFIGURATION_VER               " Letzes Updated: "
#define MSG_FREE_MEMORY				        " Freier Speicher: "
#define MSG_PLANNER_BUFFER_BYTES			" PlannerBufferBytes: "
#define MSG_OK                              "ok"
#define MSG_ERR_CHECKSUM_MISMATCH			"Checksum Fehler, Letzte Zeile: "
#define MSG_ERR_NO_CHECKSUM					"Keine Checksum mit Zeilennummer, Letzte Zeile: "
#define MSG_BEGIN_FILE_LIST                 "Beginn Dateiliste"
#define MSG_END_FILE_LIST                   "Ende Dateiliste"
#define MSG_M104_INVALID_EXTRUDER           "M104 Invalid extruder "
#define MSG_M105_INVALID_EXTRUDER           "M105 Invalid extruder "
#define MSG_M200_INVALID_EXTRUDER           "M200 Invalid extruder "
#define MSG_M218_INVALID_EXTRUDER           "M218 Invalid extruder "
#define MSG_M221_INVALID_EXTRUDER           "M221 Invalid extruder "
#define(length=38) MSG_ERR_NO_THERMISTORS   "Keine Temp.sensoren - keine Temperatur"
#define MSG_M109_INVALID_EXTRUDER           "M109 Invalid extruder "
#define MSG_HEATING                         "Aufheizen"
#define(length=20) MSG_HEATING_COMPLETE     "Aufgeheizen klar."
#define MSG_BED_HEATING                     "Bed aufheizen"
#define MSG_BED_DONE                        "Bed OK"
#define MSG_M115_REPORT                     "FIRMWARE_NAME:Marlin V1.0.2; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" CUSTOM_MENDEL_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
#define MSG_ERR_KILLED          			"Drucker gestoppt. kill() aufgerufen!"
#define MSG_ERR_STOPPED                     "Der Drucker wurde aufgrund von Fehlern gestoppt. Beheben Sie den Fehler und verwenden Sie M999, um neu zu starten. (Temperatur wird reset. Stellen Sie es nach dem Neustart ein)"
#define MSG_RESEND                          "Resend: "
#define MSG_M119_REPORT                     "Endstop status anzeigen"
#define MSG_ENDSTOP_HIT                     "AUSGELOEST"
#define MSG_ENDSTOP_OPEN                    "offen"

#define MSG_SD_CANT_OPEN_SUBDIR             "Kann Unterverz. nicht oeffnen"
#define MSG_SD_INIT_FAIL                    "SD init fail"
#define MSG_SD_VOL_INIT_FAIL                "volume.init failed"
#define MSG_SD_OPENROOT_FAIL                "openRoot failed"
#define MSG_SD_CARD_OK                      "SD card ok"
#define MSG_SD_WORKDIR_FAIL                 "workDir open failed"
#define MSG_SD_OPEN_FILE_FAIL               "open failed, File: "
#define MSG_SD_FILE_OPENED                  "Datei geoeffnet: "
#define MSG_SD_FILE_SELECTED                "Datei ausgewoehlt"
#define MSG_SD_WRITE_TO_FILE                "Writing to file: "
#define MSG_SD_PRINTING_BYTE                "SD printing byte "
#define MSG_SD_NOT_PRINTING                 "Kein SD Druck"
#define MSG_SD_ERR_WRITE_TO_FILE            "Fehler beim Schreiben in Datei"
#define MSG_SD_CANT_ENTER_SUBDIR            "Kann nicht ins Unterverz.:"
#define MSG_STEPPER_TOO_HIGH                "Steprate too high:"
#define MSG_ENDSTOPS_HIT                    "endstops hit:"
#define MSG_ERR_COLD_EXTRUDE_STOP           " kalte Extrusion verhindert"
#define MSG_BABYSTEPPING_X                  "Babystepping X"
#define MSG_BABYSTEPPING_Y                  "Babystepping Y"
#define MSG_BABYSTEPPING_Z                  "Einstellen Z"
#define MSG_SERIAL_ERROR_MENU_STRUCTURE     "Error in menu structure"

#define MSG_LANGUAGE_NAME					"Deutsch"
#define MSG_LANGUAGE_SELECT					"Waehle Sprache"
#define MSG_PRUSA3D							"prusa3d.com"
#define MSG_PRUSA3D_FORUM					"forum.prusa3d.com"
#define MSG_PRUSA3D_HOWTO					"howto.prusa3d.com"

#define(length=20) MSG_SELFTEST_ERROR		"Selbsttest Fehler !"
#define MSG_SELFTEST_PLEASECHECK			"Bitte pruefe:"	
#define(length=20) MSG_SELFTEST_NOTCONNECTED "Nicht angeschlossen"
#define MSG_SELFTEST_HEATERTHERMISTOR		"Heater/Thermistor"
#define MSG_SELFTEST_BEDHEATER				"Bed / Heater"
#define(length=20) MSG_SELFTEST_WIRINGERROR	"Verdrahtungsfehler"
#define MSG_SELFTEST_ENDSTOPS				"Endstops"
#define MSG_SELFTEST_MOTOR					"Motor"
#define MSG_SELFTEST_ENDSTOP				"Endstop"
#define(length=20, lines=2) MSG_SELFTEST_ENDSTOP_NOTHIT "Endstop nicht getroffen"
#define MSG_SELFTEST_OK						"Selbsttest OK"
#define(length=20) MSG_LOOSE_PULLEY			"Loser pulley"

#define MSG_SELFTEST_FAN					"Lueftertest";
#define(length=20) MSG_SELFTEST_COOLING_FAN "Vorderer Luefter?";
#define(length=20) MSG_SELFTEST_EXTRUDER_FAN "Linker Hotend-Fan?";
#define MSG_SELFTEST_FAN_YES				"Dreht";
#define(length=20) MSG_SELFTEST_FAN_NO		"Dreht nicht";

#define(length=20) MSG_STATS_TOTALFILAMENT	"Filament Total:"
#define(length=20) MSG_STATS_TOTALPRINTTIME "Totale druck Zeit:"
#define(length=20) MSG_STATS_FILAMENTUSED	"Filamentverbrauch:"
#define(length=20) MSG_STATS_PRINTTIME		"Druck Zeit:  "
#define(length=20) MSG_SELFTEST_START				"Selbsttest start "
#define(length=20) MSG_SELFTEST_CHECK_ENDSTOPS		"Pruefe endstops   "
#define(length=20) MSG_SELFTEST_CHECK_HOTEND		"Pruefe hotend     "  
#define(length=20) MSG_SELFTEST_CHECK_X				"Pruefe X Achse    "
#define(length=20) MSG_SELFTEST_CHECK_Y				"Pruefe Y Achse    "
#define(length=20) MSG_SELFTEST_CHECK_Z				"Pruefe Z Achse    "
#define(length=20) MSG_SELFTEST_CHECK_BED			"Pruefe Bed        "
#define(length=20) MSG_SELFTEST_CHECK_ALLCORRECT	"Alles richtig    "
#define MSG_SELFTEST						"Selbsttest       "
#define(length=20) MSG_SELFTEST_FAILED		"Selbsttest misluekt"
#define MSG_STATISTICS						"Statistiken "
#define MSG_USB_PRINTING					"USB drucken  "
#define MSG_HOMEYZ                          "Kalibrieren Z"
#define MSG_HOMEYZ_PROGRESS                 "Kalibriere Z"
#define MSG_HOMEYZ_DONE		                "Kalibrierung OK"

#define MSG_SHOW_END_STOPS					"Anzeigen endstops"
#define MSG_CALIBRATE_BED					"Kalibrierung XYZ"
#define MSG_CALIBRATE_BED_RESET				"Reset XYZ Kalibr."

#define(length=20, lines=8) MSG_MOVE_CARRIAGE_TO_THE_TOP 	"Kalibrieren von XYZ. Drehen Sie den Knopf, um die Z-Schlitten bis zum Anschlag zu bewegen. Klicken wenn fertig."
#define(length=20, lines=8) MSG_MOVE_CARRIAGE_TO_THE_TOP_Z 	"Kalibrieren von Z. Drehen Sie den Knopf, um die Z-Schlitten bis zum Anschlag zu bewegen. Klicken wenn fertig."

#define(length=20, lines=8) MSG_CONFIRM_NOZZLE_CLEAN			"Bitte reinigen Sie die Duese zur Kalibrierung. Klicken wenn fertig."
#define(length=20, lines=8) MSG_CONFIRM_CARRIAGE_AT_THE_TOP	"Sind beide Z Schlitten ganz oben?"

#define(length=60) MSG_FIND_BED_OFFSET_AND_SKEW_LINE1		"Suche Bed Kalibrierungspunkt"
#define(length=14) MSG_FIND_BED_OFFSET_AND_SKEW_LINE2		" von 4"
#define(length=60) MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1	"Genauigkeit verbessern bei Kalibrierpunkt"
#define(length=14) MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2	" von 9"
#define(length=60) MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1	"Messen der Referenzhoehe des Kalibrierpunktes"
#define(length=14) MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2	" von 9"

#define(length=20, lines=8) MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND			"XYZ-Kalibrierung fehlgeschlagen. Bed-Kalibrierpunkt nicht gefunden."
#define(length=20, lines=8) MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED				"XYZ-Kalibrierung fehlgeschlagen. Bitte schauen Sie in das Handbuch."
#define(length=20, lines=8) MSG_BED_SKEW_OFFSET_DETECTION_PERFECT					"XYZ-Kalibrierung ok. X/Y-Achsen sind im Lot. Glueckwunsch!"
#define(length=20, lines=8) MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD					"XYZ Kalibrierung in Ordnung. X/Y Achsen sind etwas schief."
#define(length=20, lines=8) MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME				"X/Y sehr schief. Schiefheit wird automatisch korrigiert."
#define(length=20, lines=8) MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR		"XYZ-Kalibrierung fehlgeschlagen. Linker voderer Kalibrierpunkt nicht erreichbar."
#define(length=20, lines=8) MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR		"XYZ-Kalibrierung fehlgeschlagen. Rechter voderer Kalibrierpunkt nicht erreichbar."
#define(length=20, lines=8) MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR		"XYZ-Kalibrierung fehlgeschlagen. Vodere Kalibrierpunkte nicht erreichbar."
#define(length=20, lines=8) MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR		"XYZ-Kalibrierung kompromittiert. Linker vorderer Kalibrierpunkt nicht erreichbar."
#define(length=20, lines=8) MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR	"XYZ-Kalibrierung kompromittiert. Rechter vorderer Kalibrierpunkt nicht erreichbar."
#define(length=20, lines=8) MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR		"XYZ-Kalibrierung kompromittiert. Vordere Kalibrierpunkte nicht erreichbar."

#define(length=20, lines=6) MSG_BED_LEVELING_FAILED_POINT_LOW						"Bed-Nivellierung fehlgeschlagen. Sensor wurde nicht ausgeloest. Schmutz auf der Duese? Warte auf Reset."
#define(length=20, lines=5) MSG_BED_LEVELING_FAILED_POINT_HIGH						"Bed-Nivellierung fehlgeschlagen. Sensor wurde zu hoch ausgeloest. Warte auf Reset."
#define(length=20, lines=6) MSG_BED_LEVELING_FAILED_PROBE_DISCONNECTED				"Bed-Nivellierung fehlgeschlagen. Sensor nicht angeschlossen oder Kabel defekt. Warte auf Reset."

#define(length=20, lines=2)  MSG_NEW_FIRMWARE_AVAILABLE								"Neue Firmware Version verfuegbar:"
#define(length=20) MSG_NEW_FIRMWARE_PLEASE_UPGRADE									"Bitte aktualisieren."

#define(length=20, lines=8) MSG_FOLLOW_CALIBRATION_FLOW								"Der Drucker wurde noch nicht kalibriert. Bitte folgen Sie dem Handbuch, Kapitel First steps, Abschnitt Calibration flow."
#define(length=20, lines=12) MSG_BABYSTEP_Z_NOT_SET									"Der Abstand zwischen der Spitze der Duese und der Druckoberflaeche / Bed ist noch nicht eingestellt. Bitte folgen Sie dem Handbuch, First steps, Abschnitt First layer calibration."

#define(length=20, lines=4) MSG_FILAMENT_LOADING_T0							"Filament in extruder 1 einlegen. Klicken wenn fertig."
#define(length=20, lines=4) MSG_FILAMENT_LOADING_T1							"Filament in extruder 2 einlegen. Klicken wenn fertig."
#define(length=20, lines=4) MSG_FILAMENT_LOADING_T2							"Filament in extruder 3 einlegen. Klicken wenn fertig."
#define(length=20, lines=4) MSG_FILAMENT_LOADING_T3							"Filament in extruder 4 einlegen. Klicken wenn fertig."
#define(length=20, lines=1) MSG_CHANGE_EXTR									"Wechsel extruder"

#define(length=20, lines=2) MSG_FIL_LOADED_CHECK								"Ist Filament eingelegt?"
#define(length=20, lines=3) MSG_FIL_TUNING										"Knopf drehen um Filament einzustellen."
#define(length=20, lines=4) MSG_FIL_ADJUSTING								"Einstellen Filament. Bitte warten."
#define(length=20, lines=8) MSG_CONFIRM_NOZZLE_CLEAN_FIL_ADJ			"Filaments sind jetzt eingestellt. Bitte reinigen Sie die Duese zur Kalibrierung. Klicken wenn fertig."
#define(length=20, lines=4) MSG_STACK_ERROR						"Error - static memory has been overwritten"
#define(length=20, lines=1) MSG_CALIBRATE_E						"Kalibrierung E"
//#define(length=20, lines=1) MSG_RESET_CALIBRATE_E				"Reset E Cal."
#define(length=20, lines=8) MSG_E_CAL_KNOB						"Dreh den Knopf bis das Extruder Zeichen erreicht ist. Klicken wenn fertig."

//#define(length=20, lines=1) MSG_FARM_CARD_MENU					"Farm mode print"
#define(length=20, lines=8) MSG_MARK_FIL						"Markier Filament 100mm vom Extrudergehaeuse. Klicken wenn Fertig."
#define(length=20, lines=8) MSG_CLEAN_NOZZLE_E				"E-Kalibrierung beendet. Bitte reinigen Sie die Duese. Klicken wenn fertig"
#define(length=20, lines=3) MSG_WAITING_TEMP				"Warten auf Abkuehlung von Heater und Bed."
#define(length=20, lines=2) MSG_FILAMENT_CLEAN				"Ist Farbe klar?"
#define(length=20) MSG_UNLOADING_FILAMENT			"Filament auswerfen"
#define(length=20, lines=10) MSG_PAPER						"Lege ein Blatt Papier unter die Duese waehrend der Kalibrierung der ersten 4 Punkte. Wenn die Duese das Papier einfaengt, Drucker sofort ausschalten"

#define MSG_BED_CORRECTION_MENU									"Bed level korrekt"
#define MSG_BED_CORRECTION_LEFT									"Links  [um]"
#define MSG_BED_CORRECTION_RIGHT								"Rechts [um]"
#define MSG_BED_CORRECTION_FRONT								"Vorne  [um]"
#define MSG_BED_CORRECTION_REAR									"Hinten [um]"
#define MSG_BED_CORRECTION_RESET								"Reset"

#define MSG_MESH_BED_LEVELING									"Mesh Bed Leveling"
#define MSG_MENU_CALIBRATION									"Kalibrierung"
#define MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_OFF					"SD card [normal]"
#define MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_ON					"SD card [FlshAir]"
