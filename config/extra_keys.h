// The default layout has 34 keys. Additional keys can be added by pre-setting any of
// the macros defined in this file to one or more keys before sourcing this file.

// ====
// If you have more than 34 keys you can set the functionality of the extra keys.
// This needs to be defined in the keymap for each keyboard that has the extra keys, e.g. in `corne.keymap`
// ====

// Options:
// 1) If you don't want any functionality you don't need to define anything
// 2) If you want to define defaults for all layers you can define the following defines:
//    # X_LT, X_LM, X_LB, X_LH, X_RT, X_RM, X_RB, X_RH
//    They will be automatically applied to all layers.
// 3) If you want specific layers you can specify the specific key with the layer number, for example:
//    #define X_LB &none
//    #define X_LB1 &kp 1
//    Will apply 'none' to all layers except layer 1

/* left of left half */
#if !defined X_LT  // top row, left
    #define X_LT
#endif
#if !defined X_LM  // middle row, left
    #define X_LM
#endif
#if !defined X_LB  // bottom row, left
    #define X_LB
#endif
#if !defined X_LH  // thumb row, left
    #define X_LH
#endif

/* right of right half */
#if !defined X_RT  // top row, right
    #define X_RT
#endif
#if !defined X_RM  // middle row, right
    #define X_RM
#endif
#if !defined X_RB  // bottom row, right
    #define X_RB
#endif
#if !defined X_RH  // thumb row, right
    #define X_RH
#endif


/* if specific layers have not been defined, fallback to default */
#if !defined X_RT0
  #define X_RT0 X_RT
#endif
#if !defined X_RM0
  #define X_RM0 X_RM
#endif
#if !defined X_RB0
  #define X_RB0 X_RB
#endif
#if !defined X_RH0
  #define X_RH0 X_RH
#endif

#if !defined X_LT0
  #define X_LT0 X_LT
#endif
#if !defined X_LM0
  #define X_LM0 X_LM
#endif
#if !defined X_LB0
  #define X_LB0 X_LB
#endif
#if !defined X_LH0
  #define X_LH0 X_LH
#endif


#if !defined X_RT1
  #define X_RT1 X_RT
#endif
#if !defined X_RM1
  #define X_RM1 X_RM
#endif
#if !defined X_RB1
  #define X_RB1 X_RB
#endif
#if !defined X_RH1
  #define X_RH1 X_RH
#endif


#if !defined X_LT1
  #define X_LT1 X_LT
#endif
#if !defined X_LM1
  #define X_LM1 X_LM
#endif
#if !defined X_LB1
  #define X_LB1 X_LB
#endif
#if !defined X_LH1
  #define X_LH1 X_LH
#endif


#if !defined X_RT2
  #define X_RT2 X_RT
#endif
#if !defined X_RM2
  #define X_RM2 X_RM
#endif
#if !defined X_RB2
  #define X_RB2 X_RB
#endif
#if !defined X_RH2
  #define X_RH2 X_RH
#endif


#if !defined X_LT2
  #define X_LT2 X_LT
#endif
#if !defined X_LM2
  #define X_LM2 X_LM
#endif
#if !defined X_LB2
  #define X_LB2 X_LB
#endif
#if !defined X_LH2
  #define X_LH2 X_LH
#endif


#if !defined X_RT3
  #define X_RT3 X_RT
#endif
#if !defined X_RM3
  #define X_RM3 X_RM
#endif
#if !defined X_RB3
  #define X_RB3 X_RB
#endif
#if !defined X_RH3
  #define X_RH3 X_RH
#endif


#if !defined X_LT3
  #define X_LT3 X_LT
#endif
#if !defined X_LM3
  #define X_LM3 X_LM
#endif
#if !defined X_LB3
  #define X_LB3 X_LB
#endif
#if !defined X_LH3
  #define X_LH3 X_LH
#endif


#if !defined X_RT4
  #define X_RT4 X_RT
#endif
#if !defined X_RM4
  #define X_RM4 X_RM
#endif
#if !defined X_RB4
  #define X_RB4 X_RB
#endif
#if !defined X_RH4
  #define X_RH4 X_RH
#endif


#if !defined X_LT4
  #define X_LT4 X_LT
#endif
#if !defined X_LM4
  #define X_LM4 X_LM
#endif
#if !defined X_LB4
  #define X_LB4 X_LB
#endif
#if !defined X_LH4
  #define X_LH4 X_LH
#endif




