/* -*- mode: C++; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/*
 *  Main authors:
 *     Guido Tack <tack@gecode.org>
 *
 *  Copyright:
 *     Guido Tack, 2007
 *
 *  Last modified:
 *     $Date: 2011-01-18 20:06:16 +1100 (Tue, 18 Jan 2011) $ by $Author: tack $
 *     $Revision: 11538 $
 *
 *  This file is part of Gecode, the generic constraint
 *  development environment:
 *     http://www.gecode.org
 *
 *  Permission is hereby granted, free of charge, to any person obtaining
 *  a copy of this software and associated documentation files (the
 *  "Software"), to deal in the Software without restriction, including
 *  without limitation the rights to use, copy, modify, merge, publish,
 *  distribute, sublicense, and/or sell copies of the Software, and to
 *  permit persons to whom the Software is furnished to do so, subject to
 *  the following conditions:
 *
 *  The above copyright notice and this permission notice shall be
 *  included in all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 *  LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 *  OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 *  WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#include <iostream>
#include <fstream>
#include <cstring>
#include "flatzinc.hh"

using namespace std;

int main(int argc, char** argv) {

  if (argc!=2) {
    cerr << "Usage: " << argv[0] << " <file>" << endl;
    exit(EXIT_FAILURE);
  }
  
  const char* filename = argv[1];
  
  FlatZinc::Printer p;
  FlatZinc::FlatZincModel* fg = NULL;
  if (!strcmp(filename, "-")) {
    fg = FlatZinc::parse(cin, p);
  } else {
    fg = FlatZinc::parse(filename, p);
  }

  if (fg) {
    //fg->createBranchers(fg->solveAnnotations(), false, std::cerr);
    //fg->run(std::cout, p);
    fg->print(std::cout, p);
  } else {
    exit(EXIT_FAILURE);    
  }
  delete fg;
  
  return 0;
}

// STATISTICS: flatzinc-any
