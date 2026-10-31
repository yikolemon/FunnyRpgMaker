/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e4495 */

void __fastcall FUN_101e4495(int param_1,uint *param_2)

{
  byte *pbVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x204) != 7) {
    uVar2 = (ushort)param_2[1];
    uVar3 = *param_2;
    uVar4 = uVar3 & 0xffff;
    if (uVar4 < *(ushort *)(param_1 + 0x7c) && (uint)uVar2 < (uint)*(ushort *)(param_1 + 0x7c)) {
      if (uVar4 <= uVar2) {
        do {
          pbVar1 = (byte *)(*(int *)(param_1 + 0x8c) + uVar4);
          *pbVar1 = *pbVar1 & 0xfe;
          uVar3 = uVar3 + 1;
          uVar4 = uVar3 & 0xffff;
        } while ((ushort)uVar3 <= uVar2);
      }
    }
    else if (*(char *)(param_1 + 0x1ce) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0x86;
    }
  }
  return;
}

