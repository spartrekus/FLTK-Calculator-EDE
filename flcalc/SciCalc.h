// generated by Fast Light User Interface Designer (fluid) version 1.0108

#ifndef SciCalc_h
#define SciCalc_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>

class SciCalc {
  enum {MaxNumBrkts=10}; 
  enum Operator {PLUS,MINUS,MULT,DIV,POW,INVPOW,EVAL}; 
  enum mode {NONE=0,DOT=-1,NORM=-2,EXP=-3}; 
  double value[4*(MaxNumBrkts+1)];    /* The values on the stack */
  int priority[6];   /* the priorities of each operator */
  int oper[3*(MaxNumBrkts+1)];        /* the operators between them */
  int top;                            /* the top of the stack */
  int startbrkt[(MaxNumBrkts+1)];     /* the positions of the left brackets */
  int currentbrkt;                    /* bracketing we are in */
  double mem;             /* The memory value */
  int ready;              /* Whether last number is ready.
                           if "ready" is set, then typing another number
                           overwrites the current number. */
  int dot;                /* Whether the dot has been typed */
  double diver;           /* The divider when behind the dot */
  int behind;             /* Number of digits behind dot */
  int inv;                /* Whether inverse key is depressed */
  int emode;              /* Whether we are entering the exponent */
  int exponent;           /* the exponent value whilst entering exponent */
  double mantissa;        /* the mantissa value whilst entering exponent */
  int base;               /* the base we are working in (2,8,10 or 16) */
  int drgmode;            /* whether we are in deg, rad or grad mode */
public:
  SciCalc();
private:
  Fl_Double_Window *win;
  Fl_Box *leddisplay;
  Fl_Box *box_DEGRAD;
  Fl_Box *box_bracket;
  Fl_Box *box_M;
  Fl_Button *radio_2;
  void cb_radio_2_i(Fl_Button*, void*);
  static void cb_radio_2(Fl_Button*, void*);
  Fl_Button *radio_8;
  void cb_radio_8_i(Fl_Button*, void*);
  static void cb_radio_8(Fl_Button*, void*);
  Fl_Button *radio_10;
  void cb_radio_10_i(Fl_Button*, void*);
  static void cb_radio_10(Fl_Button*, void*);
  Fl_Button *radio_16;
  void cb_radio_16_i(Fl_Button*, void*);
  static void cb_radio_16(Fl_Button*, void*);
  Fl_Button *but_7;
  void cb_but_7_i(Fl_Button*, void*);
  static void cb_but_7(Fl_Button*, void*);
  Fl_Button *but_8;
  void cb_but_8_i(Fl_Button*, void*);
  static void cb_but_8(Fl_Button*, void*);
  Fl_Button *but_9;
  void cb_but_9_i(Fl_Button*, void*);
  static void cb_but_9(Fl_Button*, void*);
  Fl_Button *but_4;
  void cb_but_4_i(Fl_Button*, void*);
  static void cb_but_4(Fl_Button*, void*);
  Fl_Button *but_5;
  void cb_but_5_i(Fl_Button*, void*);
  static void cb_but_5(Fl_Button*, void*);
  Fl_Button *but_6;
  void cb_but_6_i(Fl_Button*, void*);
  static void cb_but_6(Fl_Button*, void*);
  Fl_Button *but_1;
  void cb_but_1_i(Fl_Button*, void*);
  static void cb_but_1(Fl_Button*, void*);
  Fl_Button *but_2;
  void cb_but_2_i(Fl_Button*, void*);
  static void cb_but_2(Fl_Button*, void*);
  Fl_Button *but_3;
  void cb_but_3_i(Fl_Button*, void*);
  static void cb_but_3(Fl_Button*, void*);
  Fl_Button *but_0;
  void cb_but_0_i(Fl_Button*, void*);
  static void cb_but_0(Fl_Button*, void*);
  Fl_Button *but_dot;
  void cb_but_dot_i(Fl_Button*, void*);
  static void cb_but_dot(Fl_Button*, void*);
public:
  Fl_Button *but_sign;
private:
  void cb_but_sign_i(Fl_Button*, void*);
  static void cb_but_sign(Fl_Button*, void*);
  Fl_Button *but_C;
  void cb_but_C_i(Fl_Button*, void*);
  static void cb_but_C(Fl_Button*, void*);
  Fl_Button *but_AC;
  void cb_but_AC_i(Fl_Button*, void*);
  static void cb_but_AC(Fl_Button*, void*);
  Fl_Button *but_X;
  void cb_but_X_i(Fl_Button*, void*);
  static void cb_but_X(Fl_Button*, void*);
  Fl_Button *but_div;
  void cb_but_div_i(Fl_Button*, void*);
  static void cb_but_div(Fl_Button*, void*);
  Fl_Button *but_plus;
  void cb_but_plus_i(Fl_Button*, void*);
  static void cb_but_plus(Fl_Button*, void*);
  Fl_Button *but_minus;
  void cb_but_minus_i(Fl_Button*, void*);
  static void cb_but_minus(Fl_Button*, void*);
  Fl_Button *but_pi;
  void cb_but_pi_i(Fl_Button*, void*);
  static void cb_but_pi(Fl_Button*, void*);
  Fl_Button *but_eval;
  void cb_but_eval_i(Fl_Button*, void*);
  static void cb_but_eval(Fl_Button*, void*);
  Fl_Button *but_eval_hidden;
  void cb_but_eval_hidden_i(Fl_Button*, void*);
  static void cb_but_eval_hidden(Fl_Button*, void*);
  Fl_Button *but_eval_hidden2;
  void cb_but_eval_hidden2_i(Fl_Button*, void*);
  static void cb_but_eval_hidden2(Fl_Button*, void*);
  Fl_Button *but_sqrt;
  void cb_but_sqrt_i(Fl_Button*, void*);
  static void cb_but_sqrt(Fl_Button*, void*);
  Fl_Button *but_pow;
  void cb_but_pow_i(Fl_Button*, void*);
  static void cb_but_pow(Fl_Button*, void*);
  Fl_Button *but_sin;
  void cb_but_sin_i(Fl_Button*, void*);
  static void cb_but_sin(Fl_Button*, void*);
  Fl_Button *but_cos;
  void cb_but_cos_i(Fl_Button*, void*);
  static void cb_but_cos(Fl_Button*, void*);
  Fl_Button *but_tan;
  void cb_but_tan_i(Fl_Button*, void*);
  static void cb_but_tan(Fl_Button*, void*);
  Fl_Button *but_log;
  void cb_but_log_i(Fl_Button*, void*);
  static void cb_but_log(Fl_Button*, void*);
  Fl_Button *but_ln;
  void cb_but_ln_i(Fl_Button*, void*);
  static void cb_but_ln(Fl_Button*, void*);
  Fl_Button *but_int;
  void cb_but_int_i(Fl_Button*, void*);
  static void cb_but_int(Fl_Button*, void*);
  Fl_Button *but_dr;
  void cb_but_dr_i(Fl_Button*, void*);
  static void cb_but_dr(Fl_Button*, void*);
  Fl_Button *but_drg;
  void cb_but_drg_i(Fl_Button*, void*);
  static void cb_but_drg(Fl_Button*, void*);
  Fl_Button *but_leftbr;
  void cb_but_leftbr_i(Fl_Button*, void*);
  static void cb_but_leftbr(Fl_Button*, void*);
  Fl_Button *but_rightbr;
  void cb_but_rightbr_i(Fl_Button*, void*);
  static void cb_but_rightbr(Fl_Button*, void*);
  Fl_Button *but_exch;
  void cb_but_exch_i(Fl_Button*, void*);
  static void cb_but_exch(Fl_Button*, void*);
  Fl_Button *but_invx;
  void cb_but_invx_i(Fl_Button*, void*);
  static void cb_but_invx(Fl_Button*, void*);
  Fl_Button *but_fact;
  void cb_but_fact_i(Fl_Button*, void*);
  static void cb_but_fact(Fl_Button*, void*);
  Fl_Button *but_Mplus;
  void cb_but_Mplus_i(Fl_Button*, void*);
  static void cb_but_Mplus(Fl_Button*, void*);
  Fl_Button *but_Mmult;
  void cb_but_Mmult_i(Fl_Button*, void*);
  static void cb_but_Mmult(Fl_Button*, void*);
  Fl_Button *but_Mclear;
  void cb_but_Mclear_i(Fl_Button*, void*);
  static void cb_but_Mclear(Fl_Button*, void*);
  Fl_Button *but_Mst;
  void cb_but_Mst_i(Fl_Button*, void*);
  static void cb_but_Mst(Fl_Button*, void*);
  Fl_Button *but_Mrc;
  void cb_but_Mrc_i(Fl_Button*, void*);
  static void cb_but_Mrc(Fl_Button*, void*);
  Fl_Button *check_inv;
  void cb_check_inv_i(Fl_Button*, void*);
  static void cb_check_inv(Fl_Button*, void*);
  Fl_Button *but_quit;
  void cb_but_quit_i(Fl_Button*, void*);
  static void cb_but_quit(Fl_Button*, void*);
public:
  ~SciCalc();
  void run(int px=-1,int py=-1);
private:
  void handle_number(double numb);
  void handle_operator(Operator op);
  void change_base(int newbase);
  void set_display(double val,mode behind);
  void set_memdisp();
  void set_drgdisp();
  void set_brktdisp();
  void add_left_bracket();
  void add_right_bracket();
public:
  void factorial();
  void exchange();
  void exponent_pi();
  void calc(int i);
private:
  void init_value(int lev);
  void cvttobase(double num,int base,mode behind,char *str);
  void setnormlabels();
  void setinvlabels();
  void mem_exchange();
  double to_drg(double angle);
  double from_drg(double angle);
public:
  void memexch();
};
#endif
