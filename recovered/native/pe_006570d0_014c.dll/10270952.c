/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10270952 */

float10 FUN_10270952(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  float *pfStack_28;
  int local_1c;
  undefined1 local_18 [8];
  char local_10;
  float local_8;
  
  if (param_2 != (int *)0x0) {
    *param_2 = param_1;
  }
  if (param_1 == 0) {
    pfStack_28 = (float *)0x10270971;
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    pfStack_28 = (float *)0x1027097c;
    FUN_10273ea8();
    fVar3 = (float10)0;
  }
  else {
    pfStack_28 = (float *)param_3;
    uStack_2c = 0x1027098b;
    FUN_1025be8b();
    local_8 = 0.0;
    pfStack_28 = &local_8;
    make_c_string_character_source<>(auStack_30,param_1,param_2);
    iVar2 = FUN_1026cbde(local_18);
    if ((iVar2 == 3) || (iVar2 == 2)) {
      pfStack_28 = (float *)0x102709bd;
      puVar1 = (undefined4 *)FUN_10268ffd();
      *puVar1 = 0x22;
    }
    if (local_10 != '\0') {
      *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
    }
    fVar3 = (float10)local_8;
  }
  return fVar3;
}

