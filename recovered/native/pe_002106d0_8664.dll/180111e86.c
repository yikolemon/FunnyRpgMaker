/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180111e86 */

ulonglong * FUN_180111e86(ulonglong *param_1,longlong param_2,undefined8 *param_3)

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
  
  lVar2 = DAT_180419160;
  local_60 = DAT_180402640 ^ (ulonglong)auStack_a8;
  fVar6 = (float)*param_3;
  fVar4 = (float)((ulonglong)*param_3 >> 0x20);
  if ((*(byte *)(DAT_180419160 + 0x2030) & 0x10) != 0) {
    fVar6 = *(float *)(DAT_180419160 + 0x207c);
    fVar4 = *(float *)(DAT_180419160 + 0x2084);
    if ((*(float *)(DAT_180419160 + 0x2078) < 0.0) || (*(float *)(DAT_180419160 + 0x2080) < 0.0)) {
      fVar3 = *(float *)(param_2 + 0x70);
    }
    else {
      fVar3 = (float)FUN_1801179ee();
    }
    if ((fVar6 < 0.0) || (fVar4 < 0.0)) {
      fVar4 = *(float *)(param_2 + 0x74);
    }
    else {
      fVar4 = (float)FUN_1801179ee();
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
  fVar3 = DAT_1802dbb50;
  if ((*(uint *)(param_2 + 0x14) & 0x5000000) == 0x1000000) {
    if ((*(uint *)(param_2 + 0x1c) & 4) != 0) {
      fVar3 = *(float *)(DAT_180419160 + 0xdd0);
    }
  }
  else if ((*(uint *)(param_2 + 0x14) & 0x40) == 0) {
    fVar3 = *(float *)(DAT_180419160 + 0xdd0);
  }
  FUN_18012c3c1(param_2);
  FUN_180102463();
  fVar5 = (float)FUN_180102463();
  *param_1 = CONCAT44(~-(uint)(fVar5 <= fVar4) & (uint)fVar5,~-(uint)(fVar3 <= fVar6) & (uint)fVar3)
             | CONCAT44((uint)fVar4 & -(uint)(fVar5 <= fVar4),(uint)fVar6 & -(uint)(fVar3 <= fVar6))
  ;
  if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_a8)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_a8);
}

