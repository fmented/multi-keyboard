#ifndef EVENT_TO_HID_H
#define EVENT_TO_HID_H

#include  "keyboard.h"
#include "keytab.h"

void event_hid(int x){
  switch (x){
    case(	32	):			//	[Space]	
    macroKey(0,SPACE);
    break;
    case(	33	):			//	[!]	
    macroKey(SHIFT,K1);
    break;
    case(	34	):			//	["]	
    macroKey(SHIFT,QUOTE);
    break;
    case(	35	):			//	[#]	
    macroKey(SHIFT,K3);
    break;
    case(	36	):			//	[$]	
    macroKey(SHIFT,K4);
    break;
    case(	37	):			//	[%]	
    macroKey(SHIFT,K5);
    break;
    case(	38	):			//	[&]	
    macroKey(SHIFT,K7);
    break;
    case(	39	):			//	[']	
    macroKey(0,QUOTE);
    break;
    case(	40	):			//	[(]	
    macroKey(SHIFT,K9);
    break;
    case(	41	):			//	[)]	
    macroKey(SHIFT,K0);
    break;
    case(	42	):			//	[*]	
    macroKey(SHIFT,K8);
    break;
    case(	43	):			//	[+]	
    macroKey(SHIFT,EQUAL);
    break;
    case(	44	):			//	[,]	
    macroKey(0,COMMA);
    break;
    case(	45	):			//	[-]	
    macroKey(0,SUBTRACT);
    break;
    case(	46	):			//	[.]	
    macroKey(0,PERIOD);
    break;
    case(	47	):			//	[/]	
    macroKey(0,FSLASH);
    break;
    case(	48	):			//	[0]	
    macroKey(0,K0);
    break;
    case(	49	):			//	[1]	
    macroKey(0,K1);
    break;
    case(	50	):			//	[2]	
    macroKey(0,K2);
    break;
    case(	51	):			//	[3]	
    macroKey(0,K3);
    break;
    case(	52	):			//	[4]	
    macroKey(0,K4);
    break;
    case(	53	):			//	[5]	
    macroKey(0,K5);
    break;
    case(	54	):			//	[6]	
    macroKey(0,K6);
    break;
    case(	55	):			//	[7]	
    macroKey(0,K7);
    break;
    case(	56	):			//	[8]	
    macroKey(0,K8);
    break;
    case(	57	):			//	[9]	
    macroKey(0,K9);
    break;
    case(	58	):			//	[:]	
    macroKey(SHIFT,SEMICOLON);
    break;
    case(	59	):			//	[;]	
    macroKey(0,SEMICOLON);
    break;
    case(	60	):			//	[<]	
    macroKey(SHIFT,COMMA);
    break;
    case(	61	):			//	[=]	
    macroKey(0,EQUAL);
    break;
    case(	62	):			//	[>]	
    macroKey(SHIFT,PERIOD);
    break;
    case(	63	):			//	[?]	
    macroKey(SHIFT,FSLASH);
    break;
    case(	64	):			//	[@]	
    macroKey(SHIFT,K2);
    break;
    case(	65	):			//	[A]	
    macroKey(SHIFT,A);
    break;
    case(	66	):			//	[B]	
    macroKey(SHIFT,B);
    break;
    case(	67	):			//	[C]	
    macroKey(SHIFT,C);
    break;
    case(	68	):			//	[D]	
    macroKey(SHIFT,D);
    break;
    case(	69	):			//	[E]	
    macroKey(SHIFT,E);
    break;
    case(	70	):			//	[F]	
    macroKey(SHIFT,F);
    break;
    case(	71	):			//	[G]	
    macroKey(SHIFT,G);
    break;
    case(	72	):			//	[H]	
    macroKey(SHIFT,H);
    break;
    case(	73	):			//	[I]	
    macroKey(SHIFT,I);
    break;
    case(	74	):			//	[J]	
    macroKey(SHIFT,J);
    break;
    case(	75	):			//	[K]	
    macroKey(SHIFT,K);
    break;
    case(	76	):			//	[L]	
    macroKey(SHIFT,L);
    break;
    case(	77	):			//	[M]	
    macroKey(SHIFT,M);
    break;
    case(	78	):			//	[N]	
    macroKey(SHIFT,N);
    break;
    case(	79	):			//	[O]	
    macroKey(SHIFT,O);
    break;
    case(	80	):			//	[P]	
    macroKey(SHIFT,P);
    break;
    case(	81	):			//	[Q]	
    macroKey(SHIFT,Q);
    break;
    case(	82	):			//	[R]	
    macroKey(SHIFT,R);
    break;
    case(	83	):			//	[S]	
    macroKey(SHIFT,S);
    break;
    case(	84	):			//	[T]	
    macroKey(SHIFT,T);
    break;
    case(	85	):			//	[U]	
    macroKey(SHIFT,U);
    break;
    case(	86	):			//	[V]	
    macroKey(SHIFT,V);
    break;
    case(	87	):			//	[W]	
    macroKey(SHIFT,W);
    break;
    case(	88	):			//	[X]	
    macroKey(SHIFT,X);
    break;
    case(	89	):			//	[Y]	
    macroKey(SHIFT,Y);
    break;
    case(	90	):			//	[Z]	
    macroKey(SHIFT,Z);
    break;
    case(	91	):			//	[[]	
    macroKey(0,LBRACKET);
    break;
    case(	92	):			//	[\]	
    macroKey(0,BSLASH);
    break;
    case(	93	):			//	[]]	
    macroKey(0,RBRACKET);
    break;
    case(	94	):			//	[^]	
    macroKey(SHIFT,K6);
    break;
    case(	95	):			//	[_]	
    macroKey(SHIFT,SUBTRACT);
    break;
    case(	96	):			//	[`]	
    macroKey(0,GRAVE);
    break;
    case(	97	):			//	[a]	
    macroKey(0,A);
    break;
    case(	98	):			//	[b]	
    macroKey(0,B);
    break;
    case(	99	):			//	[c]	
    macroKey(0,C);
    break;
    case(	100	):			//	[d]	
    macroKey(0,D);
    break;
    case(	101	):			//	[e]	
    macroKey(0,E);
    break;
    case(	102	):			//	[f]	
    macroKey(0,F);
    break;
    case(	103	):			//	[g]	
    macroKey(0,G);
    break;
    case(	104	):			//	[h]	
    macroKey(0,H);
    break;
    case(	105	):			//	[i]	
    macroKey(0,I);
    break;
    case(	106	):			//	[j]	
    macroKey(0,J);
    break;
    case(	107	):			//	[k]	
    macroKey(0,K);
    break;
    case(	108	):			//	[l]	
    macroKey(0,L);
    break;
    case(	109	):			//	[m]	
    macroKey(0,M);
    break;
    case(	110	):			//	[n]	
    macroKey(0,N);
    break;
    case(	111	):			//	[o]	
    macroKey(0,O);
    break;
    case(	112	):			//	[p]	
    macroKey(0,P);
    break;
    case(	113	):			//	[q]	
    macroKey(0,Q);
    break;
    case(	114	):			//	[r]	
    macroKey(0,R);
    break;
    case(	115	):			//	[s]	
    macroKey(0,S);
    break;
    case(	116	):			//	[t]	
    macroKey(0,T);
    break;
    case(	117	):			//	[u]	
    macroKey(0,U);
    break;
    case(	118	):			//	[v]	
    macroKey(0,V);
    break;
    case(	119	):			//	[w]	
    macroKey(0,W);
    break;
    case(	120	):			//	[x]	
    macroKey(0,X);
    break;
    case(	121	):			//	[y]	
    macroKey(0,Y);
    break;
    case(	122	):			//	[z]	
    macroKey(0,Z);
    break;
    case(	123	):			//	[{]	
    macroKey(SHIFT,LBRACKET);
    break;
    case(	124	):			//	[|]	
    macroKey(SHIFT,BSLASH);
    break;
    case(	125	):			//	[}]	
    macroKey(SHIFT,RBRACKET);
    break;
    case(	126	):			//	[~]	
    macroKey(SHIFT,GRAVE);
    break;

	}
}




void wordKey(String w){
  int n = w.length()+1;
  char words[n];
  w.toCharArray(words,n);
  words[n]=(int)words[n];
  for (int i=0; i < n-1; i++){   
      event_hid(words[i]);
    delay(1);
  }
}

#endif
