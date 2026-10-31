/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003d143 */

void FUN_14003d143(longlong param_1,uint *param_2)

{
  byte *pbVar1;
  ushort uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x324) != 7) {
    uVar2 = (ushort)param_2[1];
    uVar3 = *param_2;
    if ((uVar3 & 0xffff) < (uint)*(ushort *)(param_1 + 0xe8) &&
        (uint)uVar2 < (uint)*(ushort *)(param_1 + 0xe8)) {
      if ((uVar3 & 0xffff) <= (uint)uVar2) {
        do {
          pbVar1 = (byte *)(*(longlong *)(param_1 + 0x108) + (ulonglong)(uVar3 & 0xffff));
          *pbVar1 = *pbVar1 & 0xfe;
          uVar3 = uVar3 + 1;
        } while ((ushort)uVar3 <= uVar2);
      }
    }
    else if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x86;
      return;
    }
  }
  return;
}

