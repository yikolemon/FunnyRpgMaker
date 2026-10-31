/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026cb6d */

float10 FUN_1026cb6d(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  float10 fVar2;
  int local_24;
  undefined1 local_20 [8];
  char local_18;
  double local_14 [2];
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
    fVar2 = (float10)0;
  }
  else {
    FUN_1025be8b(param_2);
    local_14[0] = 0.0;
    FUN_1026cc5e(local_20,param_1,0,local_14);
    if (local_18 != '\0') {
      *(uint *)(local_24 + 0x350) = *(uint *)(local_24 + 0x350) & 0xfffffffd;
    }
    fVar2 = (float10)local_14[0];
  }
  return fVar2;
}

