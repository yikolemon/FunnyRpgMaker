/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180108ba4 */

undefined8 FUN_180108ba4(int param_1,ulonglong param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*(char *)(DAT_180419160 + 0x120 + (longlong)param_1) == '\x01') &&
      (fVar1 = *(float *)(DAT_180419160 + 0xbac + (longlong)param_1 * 4), 0.0 <= fVar1)) &&
     (((fVar1 == 0.0 && (!NAN(fVar1))) ||
      ((((param_2 & 1) != 0 && (*(float *)(DAT_180419160 + 0xa8) < fVar1)) &&
       (iVar2 = FUN_18011845c(fVar1 - *(float *)(DAT_180419160 + 0x48),fVar1,
                              *(float *)(DAT_180419160 + 0xa8),*(undefined4 *)(DAT_180419160 + 0xac)
                             ), 0 < iVar2)))))) {
    uVar3 = FUN_180118ab7(param_1 + 0x290,param_3);
    return uVar3;
  }
  return 0;
}

