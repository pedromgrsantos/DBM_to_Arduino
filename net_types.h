/* Net TP2_2022_IOPT_TOOLS - IOPT */
/* Automatic code generated by IOPT2C XSLT transformation. */


_Bool outputIrrigationValue;
int outputIrrigationDurationValue;
int inputSoilHumiValue;
int inputAirHumiValue;
_Bool outputSensorCheckValue;
_Bool outputSensorCheck;
int inputOverride;
int rainMap;

#ifndef __TP2_2022_IOPT_TOOLS_DEFS
#define __TP2_2022_IOPT_TOOLS_DEFS

#define RED_LED 13
#define GREEN_LED 12
#define BLUE_LED 11
#define OVERRIDE A0
#define METEORAIN A2

#define TRACE_CONT_RUN       (-1)
#define TRACE_PAUSE          0
#define TRACE_SINGLE_STEP    1
#define TRACE_N_STEPS(n)     (n)

#define MODEL_NAME		TP2_2022_IOPT_TOOLS
#define MODEL_NAME_STR		"TP2_2022_IOPT_TOOLS"
#define MODEL_VERSION		"2022-06-20 22:40:50"
#define MODEL_N_INPUTS		4
#define MODEL_N_OUTPUTS		3
#define MODEL_N_PLACES		6
#define MODEL_N_TRANSITIONS	12

#ifdef __cplusplus
extern "C" {
#endif

extern int trace_control;

typedef struct {
    unsigned int p_2: 2; /* Place p_Checking_Conditions */
    unsigned int p_7: 2; /* Place p_Checked */
    unsigned int p_12: 2; /* Place p_Starting_Irrigation */
    unsigned int p_23: 2; /* Place p_Stoping_Irrigation */
    unsigned int p_56: 2; /* Place p_Irrigating */
    unsigned int p_80: 2; /* Place p_Irrigating_Timer */
    unsigned int padding: 4;
} TP2_2022_IOPT_TOOLS_NetMarking;


typedef struct {
    unsigned int is_Humidity_Soil : 7;
    unsigned int is_Humidity_Air : 7;
    unsigned int is_Override_Irrigation : 1;
    unsigned int is_Meteo_Station_Rain : 7;
} TP2_2022_IOPT_TOOLS_InputSignals;


typedef struct {
    unsigned int ie_Override_Irrigation_On : 1;
    unsigned int ie_Override_Irrigation_Off : 1;
} TP2_2022_IOPT_TOOLS_InputSignalEvents;


typedef struct {
    unsigned int oe_Irrigation_On : 1;
    unsigned int oe_Irrigation_Off : 1;
    unsigned int padding : 6;
} TP2_2022_IOPT_TOOLS_OutputSignalEvents;


typedef struct {
    unsigned int os_Irrigation_Duration : 9;
    unsigned int os_Sensor_Check : 1;
} TP2_2022_IOPT_TOOLS_PlaceOutputSignals;


typedef struct {
    unsigned int os_Irrigation : 1;
    unsigned int padding: 7;
} TP2_2022_IOPT_TOOLS_EventOutputSignals;


typedef struct {
    unsigned int t_3 : 1; /* t_Check_Humidity */
    unsigned int t_13 : 1; /* t_Stop_Irrigation */
    unsigned int t_20 : 1; /* t_Irrigation_Check */
    unsigned int t_59 : 1; /* t_Open_Valves */
    unsigned int t_62 : 1; /* t_Check_Rain */
    unsigned int t_78 : 1; /* t_Override_On */
    unsigned int t_79 : 1; /* t_Override_Off */
    unsigned int t_81 : 1; /* t_Close_Valves */
    unsigned int t_85 : 1; /* t_Start_Irrigation_by_Sensors */
    unsigned int t_89 : 1; /* t_Go_Check */
    unsigned int t_103 : 1; /* t_Irrigation_Override_Off */
    unsigned int t_112 : 1; /* t_Start_Irrigation_by_Override */
    unsigned int count: 8;
} TP2_2022_IOPT_TOOLS_TransitionFiring;

/* Array declarations: */


/* Runtime text info: */
typedef struct {
#ifdef __cplusplus
    const
#endif
    char* name;
    int value;
} iopt_param_info;

extern iopt_param_info* get_TP2_2022_IOPT_TOOLS_InputInfo();
extern iopt_param_info* get_TP2_2022_IOPT_TOOLS_OutputInfo();
extern iopt_param_info* get_TP2_2022_IOPT_TOOLS_MarkingInfo();
extern iopt_param_info* get_TP2_2022_IOPT_TOOLS_TFiredInfo();
extern void force_TP2_2022_IOPT_TOOLS_Inputs( iopt_param_info fv[], TP2_2022_IOPT_TOOLS_InputSignals* in );
extern void force_TP2_2022_IOPT_TOOLS_Outputs( iopt_param_info fv[], TP2_2022_IOPT_TOOLS_PlaceOutputSignals* place_out, TP2_2022_IOPT_TOOLS_EventOutputSignals* ev_out );
extern void force_TP2_2022_IOPT_TOOLS_Marking( iopt_param_info fv[], TP2_2022_IOPT_TOOLS_NetMarking* m );


extern void createInitial_TP2_2022_IOPT_TOOLS_NetMarking( TP2_2022_IOPT_TOOLS_NetMarking* init_marking );
extern void createEmpty_TP2_2022_IOPT_TOOLS_NetMarking( TP2_2022_IOPT_TOOLS_NetMarking* empty_marking );
extern void add_TP2_2022_IOPT_TOOLS_NetMarkings( TP2_2022_IOPT_TOOLS_NetMarking* dest_marking, TP2_2022_IOPT_TOOLS_NetMarking* source_marking );

extern void init_TP2_2022_IOPT_TOOLS_OutputSignals( TP2_2022_IOPT_TOOLS_PlaceOutputSignals* place_out, TP2_2022_IOPT_TOOLS_EventOutputSignals* ev_out );

/* Transition 3 - t_Check_Humidity */
extern int  t_3_enabled( TP2_2022_IOPT_TOOLS_NetMarking* prev, TP2_2022_IOPT_TOOLS_NetMarking* avail );
extern int  t_3_events( TP2_2022_IOPT_TOOLS_InputSignalEvents* events );
extern int  t_3_guards( TP2_2022_IOPT_TOOLS_NetMarking* marking, TP2_2022_IOPT_TOOLS_InputSignals* inputs, TP2_2022_IOPT_TOOLS_PlaceOutputSignals* place_out, TP2_2022_IOPT_TOOLS_EventOutputSignals* ev_out );
extern void t_3_remove_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_3_add_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_3_generate_output_events( TP2_2022_IOPT_TOOLS_OutputSignalEvents* ev_out );
/* Transition 13 - t_Stop_Irrigation */
extern int  t_13_enabled( TP2_2022_IOPT_TOOLS_NetMarking* prev, TP2_2022_IOPT_TOOLS_NetMarking* avail );
extern int  t_13_events( TP2_2022_IOPT_TOOLS_InputSignalEvents* events );
extern int  t_13_guards( TP2_2022_IOPT_TOOLS_NetMarking* marking, TP2_2022_IOPT_TOOLS_InputSignals* inputs, TP2_2022_IOPT_TOOLS_PlaceOutputSignals* place_out, TP2_2022_IOPT_TOOLS_EventOutputSignals* ev_out );
extern void t_13_remove_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_13_add_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_13_generate_output_events( TP2_2022_IOPT_TOOLS_OutputSignalEvents* ev_out );
/* Transition 20 - t_Irrigation_Check */
extern int  t_20_enabled( TP2_2022_IOPT_TOOLS_NetMarking* prev, TP2_2022_IOPT_TOOLS_NetMarking* avail );
extern int  t_20_events( TP2_2022_IOPT_TOOLS_InputSignalEvents* events );
extern int  t_20_guards( TP2_2022_IOPT_TOOLS_NetMarking* marking, TP2_2022_IOPT_TOOLS_InputSignals* inputs, TP2_2022_IOPT_TOOLS_PlaceOutputSignals* place_out, TP2_2022_IOPT_TOOLS_EventOutputSignals* ev_out );
extern void t_20_remove_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_20_add_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_20_generate_output_events( TP2_2022_IOPT_TOOLS_OutputSignalEvents* ev_out );
/* Transition 59 - t_Open_Valves */
extern int  t_59_enabled( TP2_2022_IOPT_TOOLS_NetMarking* prev, TP2_2022_IOPT_TOOLS_NetMarking* avail );
extern int  t_59_events( TP2_2022_IOPT_TOOLS_InputSignalEvents* events );
extern int  t_59_guards( TP2_2022_IOPT_TOOLS_NetMarking* marking, TP2_2022_IOPT_TOOLS_InputSignals* inputs, TP2_2022_IOPT_TOOLS_PlaceOutputSignals* place_out, TP2_2022_IOPT_TOOLS_EventOutputSignals* ev_out );
extern void t_59_remove_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_59_add_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_59_generate_output_events( TP2_2022_IOPT_TOOLS_OutputSignalEvents* ev_out );
/* Transition 62 - t_Check_Rain */
extern int  t_62_enabled( TP2_2022_IOPT_TOOLS_NetMarking* prev, TP2_2022_IOPT_TOOLS_NetMarking* avail );
extern int  t_62_events( TP2_2022_IOPT_TOOLS_InputSignalEvents* events );
extern int  t_62_guards( TP2_2022_IOPT_TOOLS_NetMarking* marking, TP2_2022_IOPT_TOOLS_InputSignals* inputs, TP2_2022_IOPT_TOOLS_PlaceOutputSignals* place_out, TP2_2022_IOPT_TOOLS_EventOutputSignals* ev_out );
extern void t_62_remove_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_62_add_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_62_generate_output_events( TP2_2022_IOPT_TOOLS_OutputSignalEvents* ev_out );
/* Transition 78 - t_Override_On */
extern int  t_78_enabled( TP2_2022_IOPT_TOOLS_NetMarking* prev, TP2_2022_IOPT_TOOLS_NetMarking* avail );
extern int  t_78_events( TP2_2022_IOPT_TOOLS_InputSignalEvents* events );
extern int  t_78_guards( TP2_2022_IOPT_TOOLS_NetMarking* marking, TP2_2022_IOPT_TOOLS_InputSignals* inputs, TP2_2022_IOPT_TOOLS_PlaceOutputSignals* place_out, TP2_2022_IOPT_TOOLS_EventOutputSignals* ev_out );
extern void t_78_remove_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_78_add_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_78_generate_output_events( TP2_2022_IOPT_TOOLS_OutputSignalEvents* ev_out );
/* Transition 79 - t_Override_Off */
extern int  t_79_enabled( TP2_2022_IOPT_TOOLS_NetMarking* prev, TP2_2022_IOPT_TOOLS_NetMarking* avail );
extern int  t_79_events( TP2_2022_IOPT_TOOLS_InputSignalEvents* events );
extern int  t_79_guards( TP2_2022_IOPT_TOOLS_NetMarking* marking, TP2_2022_IOPT_TOOLS_InputSignals* inputs, TP2_2022_IOPT_TOOLS_PlaceOutputSignals* place_out, TP2_2022_IOPT_TOOLS_EventOutputSignals* ev_out );
extern void t_79_remove_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_79_add_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_79_generate_output_events( TP2_2022_IOPT_TOOLS_OutputSignalEvents* ev_out );
/* Transition 81 - t_Close_Valves */
extern int  t_81_enabled( TP2_2022_IOPT_TOOLS_NetMarking* prev, TP2_2022_IOPT_TOOLS_NetMarking* avail );
extern int  t_81_events( TP2_2022_IOPT_TOOLS_InputSignalEvents* events );
extern int  t_81_guards( TP2_2022_IOPT_TOOLS_NetMarking* marking, TP2_2022_IOPT_TOOLS_InputSignals* inputs, TP2_2022_IOPT_TOOLS_PlaceOutputSignals* place_out, TP2_2022_IOPT_TOOLS_EventOutputSignals* ev_out );
extern void t_81_remove_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_81_add_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_81_generate_output_events( TP2_2022_IOPT_TOOLS_OutputSignalEvents* ev_out );
/* Transition 85 - t_Start_Irrigation_by_Sensors */
extern int  t_85_enabled( TP2_2022_IOPT_TOOLS_NetMarking* prev, TP2_2022_IOPT_TOOLS_NetMarking* avail );
extern int  t_85_events( TP2_2022_IOPT_TOOLS_InputSignalEvents* events );
extern int  t_85_guards( TP2_2022_IOPT_TOOLS_NetMarking* marking, TP2_2022_IOPT_TOOLS_InputSignals* inputs, TP2_2022_IOPT_TOOLS_PlaceOutputSignals* place_out, TP2_2022_IOPT_TOOLS_EventOutputSignals* ev_out );
extern void t_85_remove_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_85_add_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_85_generate_output_events( TP2_2022_IOPT_TOOLS_OutputSignalEvents* ev_out );
/* Transition 89 - t_Go_Check */
extern int  t_89_enabled( TP2_2022_IOPT_TOOLS_NetMarking* prev, TP2_2022_IOPT_TOOLS_NetMarking* avail );
extern int  t_89_events( TP2_2022_IOPT_TOOLS_InputSignalEvents* events );
extern int  t_89_guards( TP2_2022_IOPT_TOOLS_NetMarking* marking, TP2_2022_IOPT_TOOLS_InputSignals* inputs, TP2_2022_IOPT_TOOLS_PlaceOutputSignals* place_out, TP2_2022_IOPT_TOOLS_EventOutputSignals* ev_out );
extern void t_89_remove_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_89_add_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_89_generate_output_events( TP2_2022_IOPT_TOOLS_OutputSignalEvents* ev_out );
/* Transition 103 - t_Irrigation_Override_Off */
extern int  t_103_enabled( TP2_2022_IOPT_TOOLS_NetMarking* prev, TP2_2022_IOPT_TOOLS_NetMarking* avail );
extern int  t_103_events( TP2_2022_IOPT_TOOLS_InputSignalEvents* events );
extern int  t_103_guards( TP2_2022_IOPT_TOOLS_NetMarking* marking, TP2_2022_IOPT_TOOLS_InputSignals* inputs, TP2_2022_IOPT_TOOLS_PlaceOutputSignals* place_out, TP2_2022_IOPT_TOOLS_EventOutputSignals* ev_out );
extern void t_103_remove_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_103_add_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_103_generate_output_events( TP2_2022_IOPT_TOOLS_OutputSignalEvents* ev_out );
/* Transition 112 - t_Start_Irrigation_by_Override */
extern int  t_112_enabled( TP2_2022_IOPT_TOOLS_NetMarking* prev, TP2_2022_IOPT_TOOLS_NetMarking* avail );
extern int  t_112_events( TP2_2022_IOPT_TOOLS_InputSignalEvents* events );
extern int  t_112_guards( TP2_2022_IOPT_TOOLS_NetMarking* marking, TP2_2022_IOPT_TOOLS_InputSignals* inputs, TP2_2022_IOPT_TOOLS_PlaceOutputSignals* place_out, TP2_2022_IOPT_TOOLS_EventOutputSignals* ev_out );
extern void t_112_remove_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_112_add_marks( TP2_2022_IOPT_TOOLS_NetMarking* marking );
extern void t_112_generate_output_events( TP2_2022_IOPT_TOOLS_OutputSignalEvents* ev_out );
extern void TP2_2022_IOPT_TOOLS_GenerateInputSignalEvents( TP2_2022_IOPT_TOOLS_InputSignals *old_values, TP2_2022_IOPT_TOOLS_InputSignals *new_values, TP2_2022_IOPT_TOOLS_InputSignalEvents *events );

extern void TP2_2022_IOPT_TOOLS_GenerateEventOutputSignals( TP2_2022_IOPT_TOOLS_OutputSignalEvents *events, TP2_2022_IOPT_TOOLS_EventOutputSignals *signals );

extern void TP2_2022_IOPT_TOOLS_GenerateTransitionActionOutputSignals( TP2_2022_IOPT_TOOLS_TransitionFiring *tfired, TP2_2022_IOPT_TOOLS_NetMarking *marking, TP2_2022_IOPT_TOOLS_EventOutputSignals *signals );

extern void TP2_2022_IOPT_TOOLS_GeneratePlaceOutputSignals( TP2_2022_IOPT_TOOLS_NetMarking *marking, TP2_2022_IOPT_TOOLS_InputSignals *inputs, TP2_2022_IOPT_TOOLS_PlaceOutputSignals *place_out, TP2_2022_IOPT_TOOLS_EventOutputSignals *ev_out );

extern void TP2_2022_IOPT_TOOLS_ExecutionStep( TP2_2022_IOPT_TOOLS_NetMarking *prev_marking, TP2_2022_IOPT_TOOLS_InputSignals *inputs, TP2_2022_IOPT_TOOLS_InputSignals *prev_in, TP2_2022_IOPT_TOOLS_PlaceOutputSignals *place_out, TP2_2022_IOPT_TOOLS_EventOutputSignals *ev_out );

extern void TP2_2022_IOPT_TOOLS_InitializeIO();
extern void TP2_2022_IOPT_TOOLS_GetInputSignals( TP2_2022_IOPT_TOOLS_InputSignals* inputs, TP2_2022_IOPT_TOOLS_InputSignalEvents* events );
extern void TP2_2022_IOPT_TOOLS_PutOutputSignals( TP2_2022_IOPT_TOOLS_PlaceOutputSignals* place_out, TP2_2022_IOPT_TOOLS_EventOutputSignals* event_out, TP2_2022_IOPT_TOOLS_OutputSignalEvents* events );
extern void TP2_2022_IOPT_TOOLS_LoopDelay();
extern int TP2_2022_IOPT_TOOLS_FinishExecution( TP2_2022_IOPT_TOOLS_NetMarking* marking );

extern TP2_2022_IOPT_TOOLS_NetMarking* get_TP2_2022_IOPT_TOOLS_NetMarking();
extern TP2_2022_IOPT_TOOLS_InputSignals* get_TP2_2022_IOPT_TOOLS_InputSignals();
extern TP2_2022_IOPT_TOOLS_PlaceOutputSignals* get_TP2_2022_IOPT_TOOLS_PlaceOutputSignals();
extern TP2_2022_IOPT_TOOLS_EventOutputSignals* get_TP2_2022_IOPT_TOOLS_EventOutputSignals();
extern TP2_2022_IOPT_TOOLS_TransitionFiring* get_TP2_2022_IOPT_TOOLS_TransitionFiring();

#ifdef __cplusplus
};
#endif


#endif
