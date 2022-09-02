#include <stdio.h>
#include <stdlib.h>

// Escrever um programa em C que leia um valor inteiro (limite na casa do milhar), e o imprima em forma
// de caracteres, ou seja, por extenso. Ex. : 98 = noventa e oito. 

int main(){
	
	int n,m,c,d,u;
	printf("Insira o numero a ser escrito: ");
	scanf("%d",&n);
	
	m=n/1000;
	c=(n/100)-m*10;
	d=(n/10)-((m*100)+(c*10));
	u=n-((m*1000)+(c*100)+(d*10));
	printf("MILHAR: %d\nCENTENA: %d\nDECIMO: %d\nUNIDADE: %d\n",m,c,d,u);
	
	if (m!=0){
		if (m==1){
			printf("Mil ");
		}else{
			if (m==2){
				printf("Dois mil ");
			}else{
				if (m==3){
					printf("Tres mil ");
				}else{
					if (m==4){
						printf("Quatro mil ");
					}else{
						if (m==5){
							printf("Cinco mil ");
						}else{
							if (m==6){
								printf("Seis mil ");
							}else{
								if (m==7){
									printf("Sete mil ");
								}else{
									if(m==8){
										printf("Oito mil ");
									}else{
										if (m==9){
											printf("Nove mil ");
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	if (m!=0 && c==0){
		if (d!=0 || u!=0){
			printf("e ");
		}
	}
	if (d==0 && u==0){
		if (m!=0 && c!=0){
			printf("e ");
		}
			if (c==1){
				printf("Cem");
			}else{
				if (c==2){
					printf("Duzentos");
				}else{
					if (c==3){
						printf("Trezentos");
					}else{
						if (c==4){
							printf("Quatrocentos");
						}else{
							if (c==5){
								printf("Quinhentos");
							}else{
								if (c==6){
									printf("Seiscentos");
								}else{
									if (c==7){
										printf("Setecentos");
									}else{
										if (c==8){
											printf("Oitocentos");
										}else{
											if (c==9){
												printf("Novecentos");
											}
										}
									}
								}
							}
						}
					}
				}
			}
	}else{
		if (d!=0 || u!=0){
			if (c==1){
				printf("Cento e ");
			}else{
				if (c==2){
					printf("Duzentos e ");
				}else{
					if (c==3){
						printf("Trezentos e ");
					}else{
						if (c==4){
							printf("Quatrocentos e ");
						}else{
							if (c==5){
								printf("Quinhentos e ");
							}else{
								if (c==6){
									printf("Seiscentos e ");
								}else{
									if (c==7){
										printf("Setecentos e ");
									}else{
										if(c==8){
											printf("Oitocentos e ");
										}else{
											if (c==9){
												printf("Novecentos e ");
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	if (d==1){
		if (u==0){
			printf("Dez");
		}else{
			if (u==1){
				printf("Onze");
			}else{
				if (u==2){
					printf("Doze");
				}else{
					if (u==3){
						printf("Treze");
					}else{
						if (u==4){
							printf("Quatorze");
						}else{
							if (u==5){
								printf("Quinze");
							}else{
								if (u==6){
									printf("Dezesseis");
								}else{
									if (u==7){
										printf("Dezessete");
									}else{
										if (u==8){
											printf("Dezoito");
										}else{
											if (u==9){
												printf("Dezenove");
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}else{
		if (d==2){
			printf("Vinte");
		}else{
			if (d==3){
				printf("Trinta");
			}else{
				if (d==4){
					printf("Quarenta");
				}else{
					if (d==5){
						printf("Cinquenta");
					}else{
						if (d==6){
							printf("Sessenta");
						}else{
							if (d==7){
								printf("Setenta");
							}else{
								if(d==8){
									printf("Oitenta");
								}else{
									if (d==9){
										printf("Noventa");
									}
								}
							}
						}
					}
				}
			}
		}
	}
	

	if (d!=0 && d!=1 && u!=0){
		printf(" e ");
	}
	if(m==0 && c==0 && d==0 && u==0){
		printf("Zero");
	}
	if (d!=1){
		if (u==1){
			printf("Um");
		}else{
			if (u==2){
				printf("Dois");
			}else{
				if (u==3){
					printf("Tres");
				}else{
					if (u==4){
						printf("Quatro");
					}else{
						if (u==5){
							printf("Cinco");
						}else{
							if (u==6){
								printf("Seis");
							}else{
								if (u==7){
									printf("Sete");
								}else{
									if (u==8){
										printf("Oito");
									}else{
										if (u==9){
											printf("Nove");
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	printf(".");
	
}
