/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140323356 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_140323356(ulonglong *param_1,longlong param_2,undefined8 *param_3)

{
  code *pcVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  float local_68;
  float fStack_64;
  ulonglong local_60;
  
  lVar2 = DAT_14062a630;
  local_60 = ram0x000140613b10 ^ (ulonglong)auStack_a8;
  fVar6 = (float)*param_3;
  fVar4 = (float)((ulonglong)*param_3 >> 0x20);
  if ((*(byte *)(DAT_14062a630 + 0x2030) & 0x10) != 0) {
    fVar6 = *(float *)(DAT_14062a630 + 0x207c);
    fVar4 = *(float *)(DAT_14062a630 + 0x2084);
    if ((*(float *)(DAT_14062a630 + 0x2078) < 0.0) || (*(float *)(DAT_14062a630 + 0x2080) < 0.0)) {
      fVar3 = *(float *)(param_2 + 0x70);
    }
    else {
      fVar3 = (float)FUN_140328ebe();
    }
    if ((fVar6 < 0.0) || (fVar4 < 0.0)) {
      fVar4 = *(float *)(param_2 + 0x74);
    }
    else {
      fVar4 = (float)FUN_140328ebe();
    }
    pcVar1 = *(code **)(lVar2 + 0x2088);
    if (pcVar1 != (code *)0x0) {
      local_80 = *(undefined8 *)(lVar2 + 0x2090);
      local_78 = *(undefined8 *)(param_2 + 0x60);
      local_70 = *(undefined8 *)(param_2 + 0x70);
      local_68 = fVar3;
      fStack_64 = fVar4;
      (*pcVar1)(&local_80);
      fVar3 = local_68;
      fVar4 = fStack_64;
    }
    fVar6 = (float)(int)fVar3;
    fVar4 = (float)(int)fVar4;
  }
  fVar3 = DAT_1404ed020;
  if ((*(uint *)(param_2 + 0x14) & 0x5000000) == 0x1000000) {
    if ((*(uint *)(param_2 + 0x1c) & 4) != 0) {
      fVar3 = *(float *)(DAT_14062a630 + 0xdd0);
    }
  }
  else if ((*(uint *)(param_2 + 0x14) & 0x40) == 0) {
    fVar3 = *(float *)(DAT_14062a630 + 0xdd0);
  }
  FUN_14033d891(param_2);
  FUN_140313933();
  fVar5 = (float)FUN_140313933();
  *param_1 = CONCAT44(~-(uint)(fVar5 <= fVar4) & (uint)fVar5,~-(uint)(fVar3 <= fVar6) & (uint)fVar3)
             | CONCAT44((uint)fVar4 & -(uint)(fVar5 <= fVar4),(uint)fVar6 & -(uint)(fVar3 <= fVar6))
  ;
  if (ram0x000140613b10 == (local_60 ^ (ulonglong)auStack_a8)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_60 ^ (ulonglong)auStack_a8);
}

