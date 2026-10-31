/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00473a57 */

int __fastcall FUN_00473a57(byte *param_1)

{
  int iVar1;
  int iVar2;
  
  if (((uint)param_1[1] * 0x10000 + (uint)*param_1 * 0x1000000 == 0 && param_1[2] == 0) &&
      param_1[3] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    iVar2 = 0;
    do {
      iVar1 = iVar1 + (uint)param_1[iVar2 * 4 + 7] + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 != (uint)param_1[1] * 0x10000 + (uint)*param_1 * 0x1000000 +
                      (uint)CONCAT11(param_1[2],param_1[3]));
  }
  return iVar1;
}

