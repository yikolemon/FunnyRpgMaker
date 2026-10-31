/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102709e4 */

float10 FUN_102709e4(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  double *pdStack_30;
  int local_24;
  undefined1 local_20 [8];
  char local_18;
  double local_14 [2];
  
  if (param_2 != (int *)0x0) {
    *param_2 = param_1;
  }
  if (param_1 == 0) {
    pdStack_30 = (double *)0x10270a03;
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    pdStack_30 = (double *)0x10270a0e;
    FUN_10273ea8();
    fVar3 = (float10)0;
  }
  else {
    pdStack_30 = (double *)param_3;
    uStack_34 = 0x10270a1d;
    FUN_1025be8b();
    pdStack_30 = local_14;
    local_14[0] = 0.0;
    make_c_string_character_source<>(auStack_38,param_1,param_2);
    iVar2 = FUN_1026cc5e(local_20);
    if ((iVar2 == 3) || (iVar2 == 2)) {
      pdStack_30 = (double *)0x10270a53;
      puVar1 = (undefined4 *)FUN_10268ffd();
      *puVar1 = 0x22;
    }
    if (local_18 != '\0') {
      *(uint *)(local_24 + 0x350) = *(uint *)(local_24 + 0x350) & 0xfffffffd;
    }
    fVar3 = (float10)local_14[0];
  }
  return fVar3;
}

