/* Net TP2_2022_IOPT_TOOLS - IOPT */
/* Automatic code generated by IOPT2C XSLT transformation. */


#include <stdlib.h>
#include <string.h>
#include "net_types.h"


static TP2_2022_IOPT_TOOLS_TransitionFiring tfired;
    

void TP2_2022_IOPT_TOOLS_ExecutionStep(
     TP2_2022_IOPT_TOOLS_NetMarking *prev_marking,
     TP2_2022_IOPT_TOOLS_InputSignals *inputs,
     TP2_2022_IOPT_TOOLS_InputSignals *prev_in,
     TP2_2022_IOPT_TOOLS_PlaceOutputSignals *place_out,
     TP2_2022_IOPT_TOOLS_EventOutputSignals *ev_out )
{
    TP2_2022_IOPT_TOOLS_NetMarking add_marking;
    TP2_2022_IOPT_TOOLS_NetMarking avail_marking = *prev_marking;
    TP2_2022_IOPT_TOOLS_InputSignalEvents input_events;
    TP2_2022_IOPT_TOOLS_OutputSignalEvents output_events;

    memset( &output_events, 0, sizeof(output_events) );
    memset( &tfired, 0, sizeof(tfired) );

    createEmpty_TP2_2022_IOPT_TOOLS_NetMarking( &add_marking );
    TP2_2022_IOPT_TOOLS_GetInputSignals( inputs, &input_events );
    TP2_2022_IOPT_TOOLS_GenerateInputSignalEvents( prev_in, inputs, &input_events );
    *prev_in = *inputs;

    /* Transition t_Stop_Irrigation */
    if( t_13_enabled( prev_marking, &avail_marking ) &&
        t_13_events( &input_events ) &&
        t_13_guards( prev_marking, inputs, place_out, ev_out ) ) {
        tfired.t_13 = 1;
        t_13_remove_marks( &avail_marking );
        t_13_add_marks( &add_marking );
        t_13_generate_output_events( &output_events );
    }

    /* Transition t_Irrigation_Check */
    if( t_20_enabled( prev_marking, &avail_marking ) &&
        t_20_events( &input_events ) &&
        t_20_guards( prev_marking, inputs, place_out, ev_out ) ) {
        tfired.t_20 = 1;
        t_20_remove_marks( &avail_marking );
        t_20_add_marks( &add_marking );
        t_20_generate_output_events( &output_events );
    }

    /* Transition t_Open_Valves */
    if( t_59_enabled( prev_marking, &avail_marking ) &&
        t_59_events( &input_events ) &&
        t_59_guards( prev_marking, inputs, place_out, ev_out ) ) {
        tfired.t_59 = 1;
        t_59_remove_marks( &avail_marking );
        t_59_add_marks( &add_marking );
        t_59_generate_output_events( &output_events );
    }

    /* Transition t_Override_On */
    if( t_78_enabled( prev_marking, &avail_marking ) &&
        t_78_events( &input_events ) &&
        t_78_guards( prev_marking, inputs, place_out, ev_out ) ) {
        tfired.t_78 = 1;
        t_78_remove_marks( &avail_marking );
        t_78_add_marks( &add_marking );
        t_78_generate_output_events( &output_events );
    }

    /* Transition t_Override_Off */
    if( t_79_enabled( prev_marking, &avail_marking ) &&
        t_79_events( &input_events ) &&
        t_79_guards( prev_marking, inputs, place_out, ev_out ) ) {
        tfired.t_79 = 1;
        t_79_remove_marks( &avail_marking );
        t_79_add_marks( &add_marking );
        t_79_generate_output_events( &output_events );
    }

    /* Transition t_Start_Irrigation_by_Sensors */
    if( t_85_enabled( prev_marking, &avail_marking ) &&
        t_85_events( &input_events ) &&
        t_85_guards( prev_marking, inputs, place_out, ev_out ) ) {
        tfired.t_85 = 1;
        t_85_remove_marks( &avail_marking );
        t_85_add_marks( &add_marking );
        t_85_generate_output_events( &output_events );
    }

    /* Transition t_Go_Check */
    if( t_89_enabled( prev_marking, &avail_marking ) &&
        t_89_events( &input_events ) &&
        t_89_guards( prev_marking, inputs, place_out, ev_out ) ) {
        tfired.t_89 = 1;
        t_89_remove_marks( &avail_marking );
        t_89_add_marks( &add_marking );
        t_89_generate_output_events( &output_events );
    }

    /* Transition t_Irrigation_Override_Off */
    if( t_103_enabled( prev_marking, &avail_marking ) &&
        t_103_events( &input_events ) &&
        t_103_guards( prev_marking, inputs, place_out, ev_out ) ) {
        tfired.t_103 = 1;
        t_103_remove_marks( &avail_marking );
        t_103_add_marks( &add_marking );
        t_103_generate_output_events( &output_events );
    }

    /* Transition t_Start_Irrigation_by_Override */
    if( t_112_enabled( prev_marking, &avail_marking ) &&
        t_112_events( &input_events ) &&
        t_112_guards( prev_marking, inputs, place_out, ev_out ) ) {
        tfired.t_112 = 1;
        t_112_remove_marks( &avail_marking );
        t_112_add_marks( &add_marking );
        t_112_generate_output_events( &output_events );
    }

    /* Transition t_Close_Valves */
    if( t_81_enabled( prev_marking, &avail_marking ) &&
        t_81_events( &input_events ) &&
        t_81_guards( prev_marking, inputs, place_out, ev_out ) ) {
        tfired.t_81 = 1;
        t_81_remove_marks( &avail_marking );
        t_81_add_marks( &add_marking );
        t_81_generate_output_events( &output_events );
    }

    /* Transition t_Check_Humidity */
    if( t_3_enabled( prev_marking, &avail_marking ) &&
        t_3_events( &input_events ) &&
        t_3_guards( prev_marking, inputs, place_out, ev_out ) ) {
        tfired.t_3 = 1;
        t_3_remove_marks( &avail_marking );
        t_3_add_marks( &add_marking );
        t_3_generate_output_events( &output_events );
    }

    /* Transition t_Check_Rain */
    if( t_62_enabled( prev_marking, &avail_marking ) &&
        t_62_events( &input_events ) &&
        t_62_guards( prev_marking, inputs, place_out, ev_out ) ) {
        tfired.t_62 = 1;
        t_62_remove_marks( &avail_marking );
        t_62_add_marks( &add_marking );
        t_62_generate_output_events( &output_events );
    }

    add_TP2_2022_IOPT_TOOLS_NetMarkings( &avail_marking, &add_marking );

    TP2_2022_IOPT_TOOLS_GenerateTransitionActionOutputSignals( &tfired, &avail_marking, ev_out );
    TP2_2022_IOPT_TOOLS_GeneratePlaceOutputSignals( &avail_marking, inputs, place_out, ev_out );
    TP2_2022_IOPT_TOOLS_GenerateEventOutputSignals( &output_events, ev_out );
    TP2_2022_IOPT_TOOLS_PutOutputSignals( place_out, ev_out, &output_events );
    *prev_marking = avail_marking;
}

TP2_2022_IOPT_TOOLS_TransitionFiring* get_TP2_2022_IOPT_TOOLS_TransitionFiring()
{
    return &tfired;
}
