			if (p1>5 && p1<19) { //pion compos�
				if (configuration==0) if (p1>4 || p1<12) /*blanc*/ base=1; else base=0;
				if (configuration==1) if (p1>11 || p1<19) /*noir*/ base=0; else base=1;

				if (p1==5||p1==12) {cr=2; cc=0;}
				if (p1==6||p1==13) {cr=0; cc=2;}
				if (p1==7||p1==14) {cr=1; cc=1;}
				if (p1==8||p1==15) {cr=3; cc=0;}
				if (p1==9||p1==16) {cr=0; cc=3;}
				if (p1==10||p1==17) {cr=2; cc=1;}
				if (p1==11||p1==18) {cr=1; cc=2;}

				rond_carre = (p1==7 || p1==10 || p1==11 || p1==14 || p1==17 || p1==18);

				if (p1==5 || p1==8 || p1==12 || p1==15 || rond_carre) {//rond
					if (base==0) {
						if (cr==1) {
							t2[0]=0;

							if (x2!=x1-1) t2[0]=0;
							if (y2!=y1-1 && y2!=y1+1) t2[0]=0;
							
							if (y2==y1-1) t3[0]=0; //gauche devant
							if (y2==y1+1) t3[0]=1; //droite devant
						}

						if (cr==2) {
							if (x1-2<0 && y1-2<0) {
								t2[1]=1;
								if (x1!=x2 || y1!=y2) t2[1]=0;
								t3[1]=0;
							}

							if (x1-2<0 && y1+2>7) {
								t2[2]=1;
								if (x1!=x2 || y1!=y2) t2[2]=0;
								t3[2]=1;
							}

							if (x1-2<0) {
								t2[3]=1;
								if (y2!=y1-2 && y2!=y1+2) t2[3]=0;
								if (x2!=x1) t2[3]=0;

								if (y2==y1-2) t3[3]=0;
								if (y2==y1+2) t3[3]=1;
							}

							if (y1-2<0) {
								t2[4]=1;
								if (x2!=x1-2) t2[4]=0;
								if (y2!=y1) t2[4]=0;

								t3[4]=0;
							}

							if (y1+2>7) {
								t2[5]=1;
								if (x2!=x1-2) t2[5]=0;
								if (y2!=y1) t2[5]=0;

								t3[5]=1;
							}

							t2[6]=1;
							if (x2!=x1-1 && x2!=x1-2) t2[6]=0;
							if (y2!=y1-1 && y2!=y1-2 && y2!=y1-3 && y2!=y1+1 && y2!=y1+2 && y2!=y1+3) t2[6]=0;
							
							if (y2==y1-1 || y2==y1-2 || y2==y1-3) t3[6]=0; //gauche devant
							if (y2==y1+1 || y2==y1+2 || y2==y1+3) t3[6]=1; //droite devant
						}

						if (cr==3) {
							if (x1-2<0 && y1-2<0) {
								t2[7]=1;
								if (x2!=x1+1) t2[7]=0;
								if (y2!=y1+1) t2[7]=0;

								t3[7]=0;
							}

							if (x1-3<0 && y1-3<0) {
								t2[8]=1;
								if (x2!=x1-1) t2[8]=0;
								if (y2!=y1-1) t2[8]=0;

								t3[8]=0;
							}

							if (x1-2<0) {
								t2[9]=1;
								if (x2!=x1+1) t2[9]=0;
								if (y2!=y1-3 && y2!=y1+3) t2[9]=0;

								if (y2==y1-3) t3[9]=0;
								if (y2==y1+3) t3[9]=1;
							}

							if (x1-3<0) {
								t2[10]=1;
								if (x2!=x1-1) t2[10]=0;
								if (y2!=y1-3 && y2!=y1+3) t2[10]=0;

								if (y2==y1-3) t3[10]=0;
								if (y2==y1+3) t3[10]=1;
							}

							if (y1-2<0) {
								t2[11]=1;
								if (y2!=y1+1) t2[11]=0;
								if (x2!=x1-3) t2[11]=0;

								t3[11]=0;
							}

							if (y1-3<0) {
								t2[12]=1;
								if (y2!=y1-1) t2[12]=0;
								if (x2!=x1-3) t2[12]=0;

								t3[12]=1;
							}

							if (x1-2<0 && y1+2>7) {
								t2[13]=1;
								if (x2!=x1+1) t2[13]=0;
								if (y2!=y1-1) t2[13]=0;

								t3[13]=0;
							}

							if (x1-3<0 && y1+3>7) {
								t2[14]=1;
								if (x2!=x1-1) t2[14]=0;
								if (y2!=y1+1) t2[14]=0;

								t3[14]=0;
							}

							if (y1+2>7) {
								t2[15]=1;
								if (y2!=y1-1) t2[15]=0;
								if (x2!=x1-3) t2[15]=0;

								t3[15]=0;
							}

							if (y1+3>7) {
								t2[16]=1;
								if (y2!=y1+1) t2[16]=0;
								if (x2!=x1-3) t2[16]=0;

								t3[16]=1;
							}

							t2[17]=1;

							if (x2!=x1-1 && x2!=x1-2 && x2!=x1-3) t2[17]=0;
							if (y2!=y1-1 && y2!=y1-2 && y2!=y1-3 && y2!=y1+1 && y2!=y1+2 && y2!=y1+3) t2[17]=0;
							
							if (y2==y1-1 || y2==y1-2 || y2==y1-3) t3[17]=0; //gauche devant
							if (y2==y1+1 || y2==y1+2 || y2==y1+3) t3[17]=1; //droite devant
						}
					}

					if (base==1) {
						if (cr==1) {
							t2[18]=1;
							if (x2!=x1+1) t2[18]=0;
							if (y2!=y1-1 && y2!=y1+1) t2[18]=0;
							
							if (y2==y1-1) t3[18]=0; //gauche devant
							if (y2==y1+1) t3[18]=1; //droite devant
						}

						if (cr==2) {
							if (x1+2>7 && y1-2<0) {
								t2[19]=1;
								if (x1!=x2 || y1!=y2) t2[19]=0;
								t3[19]=0;
							}

							if (x1+2>7 && y1+2>7) {
								t2[20]=1;
								if (x1!=x2 || y1!=y2) t2[20]=0;
								t3[20]=1;
							}

							if (x1+2>7) {
								t2[21]=1;
								if (y2!=y1-2 && y2!=y1+2) t2[21]=0;
								if (x2!=x1) t2[21]=0;

								if (y2==y1-2) t3[21]=0;
								if (y2==y1+2) t3[21]=1;
							}

							if (y1-2<0) {
								t2[22]=1;
								if (x2!=x1+2) t2[22]=0;
								if (y2!=y1) t2[22]=0;

								t3[22]=0;
							}

							if (y1+2>7) {
								t2[23]=1;
								if (x2!=x1+2) t2[23]=0;
								if (y2!=y1) t2[23]=0;

								t3[23]=1;
							}

							t2[24]=1;

							if (x2!=x1+1 && x2!=x1+2) t2[24]=0;
							if (y2!=y1-1 && y2!=y1-2 && y2!=y1+1 && y2!=y1+2) t2[24]=0;
							
							if (y2==y1-1 || y2==y1-2) t3[24]=0; //gauche devant
							if (y2==y1+1 || y2==y1+2) t3[24]=1; //droite devant
						}

						if (cr==3) {
							if (x1+2>7 && y1-2<0) {
								t2[25]=1;
								if (x2!=x1-1) t2[25]=0;
								if (y2!=y1+1) t2[25]=0;

								t3[25]=0;
							}

							if (x1+3>7 && y1-3<0) {
								t2[26]=1;
								if (x2!=x1+1) t2[26]=0;
								if (y2!=y1-1) t2[26]=0;

								t3[26]=0;
							}

							if (x1+2>7 && y1+2>7) {
								t2[27]=1;
								if (x2!=x1-1) t2[27]=0;
								if (y2!=y1-1) t2[27]=0;

								t3[27]=0;
							}

							if (x1+3>7 && y1+3>7) {
								t2[28]=1;
								if (x2!=x1+1) t2[28]=0;
								if (y2!=y1+1) t2[28]=0;

								t3[28]=0;
							}

							if (x1+2>7) {
								t2[29]=1;
								if (x2!=x1-1) t2[29]=0;
								if (y2!=y1-3 && y2!=y1+3) t2[29]=0;

								if (y2==y1-3) t3[29]=0;
								if (y2==y1+3) t3[29]=1;
							}

							if (x1+3>7) {
								t2[30]=1;
								if (x2!=x1+1) t2[30]=0;
								if (y2!=y1-3 && y2!=y1+3) t2[30]=0;

								if (y2==y1-3) t3[30]=0;
								if (y2==y1+3) t3[30]=1;
							}

							if (y1-2<0) {
								t2[31]=1;
								if (y2!=y1+1) t2[31]=0;
								if (x2!=x1-3) t2[31]=0;

								t3[31]=0;
							}

							if (y1-3<0) {
								t2[32]=1;
								if (y2!=y1-1) t2[32]=0;
								if (x2!=x1-3) t2[32]=0;

								t3[32]=1;
							}

							if (y1+2>7) {
								t2[33]=1;
								if (y2!=y1-1) t2[33]=0;
								if (x2!=x1-3) t2[33]=0;

								t3[33]=0;
							}

							if (y1+3>7) {
								t2[34]=1;
								if (y2!=y1+1) t2[34]=0;
								if (x2!=x1-3) t2[34]=0;

								t3[34]=1;
							}

							t2[35]=1;
							if (x2!=x1+1 && x2!=x1+2 && x2!=x1+3) t2[35]=0;
							if (y2!=y1-1 && y2!=y1-2 && y2!=y1-3 && y2!=y1+1 && y2!=y1+2 && y2!=y1+3) t2[35]=0;
							
							if (y2==y1-1 || y2==y1-2 || y2==y1-3) t3[35]=0; //gauche devant
							if (y2==y1+1 || y2==y1+2 || y2==y1+3) t3[35]=1; //droite devant
							
						}
					}
				}

				if (p1==6 || p1==9 || p1==13 || p1==16 || rond_carre) {//carre
					if (base==0) {
						if (cc==1) {
							t2[36]=1;
							if (x2!=x1-1 && y2!=y1-1 && y2!=y1+1) t2[36]=0;
							
							if (y2==y1-1) t3[36]=0; //gauche
							if (y2==y1+1) t3[36]=1; //droite
							if (x2==x1-1) t3[36]=2; //milieu
						}

						if (cc==2) {
							if (x1-2<0) {
								t2[37]=1;
								if (x1!=x2) t2[37]=0;
								if (y1!=y2) t2[37]=0;

								t3[37]=2;
							}

							if (y1-2<0) {
								t2[38]=1;
								if (x1!=x2) t2[38]=0;
								if (y1!=y2) t2[38]=0;

								t3[38]=0;
							}

							if (y1+2>7) {
								t2[39]=1;
								if (x1!=x2) t2[39]=0;
								if (y1!=y2) t2[39]=0;

								t3[39]=1;
							}
							
							t2[40]=1;
							if (x2!=x1-2 && y2!=y1-2 && y2!=y1+2) t2[40]=0;
							
							if (y2==y1-2) t3[40]=0; //gauche
							if (y2==y1+2) t3[40]=1; //droite
							if (x2==x1-2) t3[40]=2; //milieu
							
						}

						if (cc==3) {
							if (x1-2<0) {
								t2[41]=1;
								if (x2!=x1+1) t2[41]=0;
								if (y2!=y1) t2[41]=0;

								t3[41]=2;
							}

							if (x1-3<0) {
								t2[42]=1;
								if (x2!=x1-1) t2[42]=0;
								if (y2!=y1) t2[42]=0;

								t3[42]=2;
							}

							if (y1-2<0) {
								t2[43]=1;
								if (y2!=y1+1) t2[43]=0;
								if (x2!=x1) t2[43]=0;

								t3[43]=0;
							}

							if (y1-3<0) {
								t2[44]=1;
								if (y2!=y1-1) t2[44]=0;
								if (x2!=x1) t2[44]=0;

								t3[44]=0;
							}

							if (y1+2>7) {
								t2[45]=1;
								if (y2!=y1-1) t2[45]=0;
								if (x2!=x1) t2[45]=0;

								t3[45]=1;
							}

							if (y1+3>7) {
								t2[46]=1;
								if (y2!=y1+1) t2[46]=0;
								if (x2!=x1) t2[46]=0;

								t3[46]=1;
							}
							
							t2[47]=1;
							if (x2!=x1-3 && y2!=y1-3 && y2!=y1+3) t2[47]=0;
							
							if (y2==y1-3) t3[47]=0; //gauche
							if (y2==y1+3) t3[47]=1; //droite
							if (x2==x1-3) t3[47]=2; //milieu
							
						}
					}

					if (base==1) {
						if (cc==1) {
							t2[48]=1;
							if (x2!=x1+1 && y2!=y1-1 && y2!=y1+1) t2[48]=0;
							
							if (y2==y1-1) t3[48]=0; //gauche
							if (y2==y1+1) t3[48]=1; //droite
							if (x2==x1+1) t3[48]=2; //milieu
						}

						if (cc==2) {
							if (x1+2>7) {
								t2[49]=1;
								if (x1!=x2) t2[49]=0;
								if (y1!=y2) t2[49]=0;

								t3[49]=2;
							}

							if (y1-2<0) {
								t2[50]=1;
								if (x1!=x2) t2[50]=0;
								if (y1!=y2) t2[50]=0;

								t3[50]=0;
							}

							if (y1+2>7) {
								t2[51]=1;
								if (x1!=x2) t2[51]=0;
								if (y1!=y2) t2[51]=0;

								t3[51]=1;
							}
							
							t2[52]=1;
							if (x2!=x1+2 && y2!=y1-2 && y2!=y1+2) t2[52]=0;
							
							if (y2==y1-2) t3[52]=0; //gauche
							if (y2==y1+2) t3[52]=1; //droite
							if (x2==x1+2) t3[52]=2; //milieu
							
						}

						if (cc==3) {
							if (x1+2>7) {
								t2[53]=1;
								if (x2!=x1-1) t2[53]=0;
								if (y2!=y1) t2[53]=0;

								t3[53]=2;
							}

							if (x1+3>7) {
								t2[54]=1;
								if (x2!=x1+1) t2[54]=0;
								if (y2!=y1) t2[54]=0;

								t3[54]=2;
							}

							if (y1-2<0) {
								t2[55]=1;
								if (y2!=y1+1) t2[55]=0;
								if (x2!=x1) t2[55]=0;

								t3[55]=0;
							}

							if (y1-3<0) {
								t2[56]=1;
								if (y2!=y1-1) t2[56]=0;
								if (x2!=x1) t2[56]=0;

								t3[56]=0;
							}

							if (y1+2>7) {
								t2[57]=1;
								if (y2!=y1-1) t2[57]=0;
								if (x2!=x1) t2[57]=0;

								t3[57]=1;
							}

							if (y1+3>7) {
								t2[58]=1;
								if (y2!=y1+1) t2[58]=0;
								if (x2!=x1) t2[58]=0;

								t3[58]=1;
							}
							
							t2[59]=1;
							if (x2!=x1+3 && y2!=y1-3 && y2!=y1+3) t2[59]=0;
							
							if (y2==y1-3) t3[59]=0; //gauche
							if (y2==y1+3) t3[59]=1; //droite
							if (x2==x1+3) t3[59]=2; //milieu
							
						}
					}
				}
		
