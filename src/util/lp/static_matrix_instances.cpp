/*
  Copyright (c) 2017 Microsoft Corporation
  Author: Lev Nachmanson
*/
#include <memory>
#include <set>
#include <utility>
#include "util/vector.h"
#include "util/lp/static_matrix.hpp"
#include "util/lp/lp_core_solver_base.h"
#include "util/lp/lp_dual_core_solver.h"
#include "util/lp/lp_dual_simplex.h"
#include "util/lp/lp_primal_core_solver.h"
#include "util/lp/scaler.h"
#include "util/lp/lar_solver.h"
namespace lean {
template void static_matrix<double, double>::add_columns_at_the_end(unsigned int);
template void static_matrix<double, double>::clear();
#ifdef LEAN_DEBUG
template bool static_matrix<double, double>::is_correct() const;
#endif
template void static_matrix<double, double>::copy_column_to_indexed_vector(unsigned int, indexed_vector<double>&) const;

template double static_matrix<double, double>::get_balance() const;
template std::set<std::pair<unsigned, unsigned>> static_matrix<double, double>::get_domain();
template std::set<std::pair<unsigned, unsigned>> lean::static_matrix<lean::mpq, lean::mpq>::get_domain();
template std::set<std::pair<unsigned, unsigned>> lean::static_matrix<lean::mpq, lean::numeric_pair<lean::mpq> >::get_domain();
template double static_matrix<double, double>::get_elem(unsigned int, unsigned int) const;
template double static_matrix<double, double>::get_max_abs_in_column(unsigned int) const;
template double static_matrix<double, double>::get_min_abs_in_column(unsigned int) const;
template double static_matrix<double, double>::get_min_abs_in_row(unsigned int) const;
template void static_matrix<double, double>::init_empty_matrix(unsigned int, unsigned int);
template void static_matrix<double, double>::init_row_columns(unsigned int, unsigned int);
template static_matrix<double, double>::ref & static_matrix<double, double>::ref::operator=(double const&);
template void static_matrix<double, double>::set(unsigned int, unsigned int, double const&);
template static_matrix<double, double>::static_matrix(unsigned int, unsigned int);
template void static_matrix<mpq, mpq>::add_column_to_vector(mpq const&, unsigned int, mpq*) const;
template void static_matrix<mpq, mpq>::add_columns_at_the_end(unsigned int);
template bool static_matrix<mpq, mpq>::is_correct() const;
template void static_matrix<mpq, mpq>::copy_column_to_indexed_vector(unsigned int, indexed_vector<mpq>&) const;

template mpq static_matrix<mpq, mpq>::get_balance() const;
template mpq static_matrix<mpq, mpq>::get_elem(unsigned int, unsigned int) const;
template mpq static_matrix<mpq, mpq>::get_max_abs_in_column(unsigned int) const;
template mpq static_matrix<mpq, mpq>::get_max_abs_in_row(unsigned int) const;
template double static_matrix<double, double>::get_max_abs_in_row(unsigned int) const;
template mpq static_matrix<mpq, mpq>::get_min_abs_in_column(unsigned int) const;
template mpq static_matrix<mpq, mpq>::get_min_abs_in_row(unsigned int) const;
template void static_matrix<mpq, mpq>::init_row_columns(unsigned int, unsigned int);
template static_matrix<mpq, mpq>::ref& static_matrix<mpq, mpq>::ref::operator=(mpq const&);
template void static_matrix<mpq, mpq>::set(unsigned int, unsigned int, mpq const&);

template static_matrix<mpq, mpq>::static_matrix(unsigned int, unsigned int);
#ifdef LEAN_DEBUG
template bool static_matrix<mpq, numeric_pair<mpq> >::is_correct() const;
#endif
template void static_matrix<mpq, numeric_pair<mpq> >::copy_column_to_indexed_vector(unsigned int, indexed_vector<mpq>&) const;
template mpq static_matrix<mpq, numeric_pair<mpq> >::get_elem(unsigned int, unsigned int) const;
template void static_matrix<mpq, numeric_pair<mpq> >::init_empty_matrix(unsigned int, unsigned int);
template void static_matrix<mpq, numeric_pair<mpq> >::set(unsigned int, unsigned int, mpq const&);


template bool lean::static_matrix<double, double>::pivot_row_to_row_given_cell(unsigned int, column_cell &, unsigned int);
template bool lean::static_matrix<lean::mpq, lean::mpq>::pivot_row_to_row_given_cell(unsigned int, column_cell& , unsigned int);
template bool lean::static_matrix<lean::mpq, lean::numeric_pair<lean::mpq> >::pivot_row_to_row_given_cell(unsigned int, column_cell&, unsigned int);
template void lean::static_matrix<lean::mpq, lean::numeric_pair<lean::mpq> >::remove_element(vector<lean::row_cell<lean::mpq>, true, unsigned int>&, lean::row_cell<lean::mpq>&);

}

