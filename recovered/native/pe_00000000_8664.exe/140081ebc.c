/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140081ebc */

undefined8 FUN_140081ebc(int param_1,ulonglong param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*(char *)(DAT_140f2a910 + 0x120 + (longlong)param_1) == '\x01') &&
      (fVar1 = *(float *)(DAT_140f2a910 + 0xbac + (longlong)param_1 * 4), 0.0 <= fVar1)) &&
     (((fVar1 == 0.0 && (!NAN(fVar1))) ||
      ((((param_2 & 1) != 0 && (*(float *)(DAT_140f2a910 + 0xa8) < fVar1)) &&
       (iVar2 = FUN_140091774(fVar1 - *(float *)(DAT_140f2a910 + 0x48),fVar1,
                              *(float *)(DAT_140f2a910 + 0xa8),*(undefined4 *)(DAT_140f2a910 + 0xac)
                             ), 0 < iVar2)))))) {
    uVar3 = FUN_140091dcf(param_1 + 0x290,param_3);
    return uVar3;
  }
  return 0;
}

