z3_add_component(portfolio
  SOURCES
    default_tactic.cpp
    enum2bv_solver.cpp
    pb2bv_solver.cpp
    bounded_int2bv_solver.cpp
    fd_solver.cpp
    smt_strategic_solver.cpp
  COMPONENT_DEPENDENCIES
    aig_tactic
    fp
    fpa_tactics
    qe
    sat_solver
    sls_tactic
    smtlogic_tactics
    subpaving_tactic
    ufbv_tactic
  TACTIC_HEADERS
    default_tactic.h
)
