extern int64_t OpState;
extern bool slowdown;
extern bool halt;
extern bool alert;
extern bool turnoffUVC;
extern int64_t classifier;
extern int64_t distance_to_target;
void handleroperationalstate_0(void);
void handleroperationalstate_1(void);
void handleroperationalstate_2(void);
void handleroperationalstate_3(void);
void handlerdtt_assumption(void);
void handlerstate_req103(void);
void handlerclassifier_assumption(void);
void handlerstate_req203(void);
void handlerstate_req101(void);
void handlerstate_req201(void);
void handlerstate_req102(void);
void handlerstate_req202(void);
void handlerstate_req000(void);
void step(void);
