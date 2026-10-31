/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e0a22 */

undefined4 __fastcall FUN_101e0a22(int param_1,byte *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  cVar1 = FUN_101e0ad0(&local_18);
  if (cVar1 != '\0') {
    uVar2 = (uint)(ushort)(*(ushort *)(param_1 + 4) << 8 | *(ushort *)(param_1 + 4) >> 8);
    pbVar5 = (byte *)(param_1 + uVar2 * 2 + 6);
    uVar3 = 0;
    if ((param_2 < pbVar5) || (uVar2 != local_18)) goto LAB_101e0aa9;
    pbVar4 = (byte *)(param_1 + 6);
    do {
      if (pbVar5 <= pbVar4) {
        uVar3 = CONCAT31((int3)((uint)pbVar4 >> 8),1);
        goto LAB_101e0aa9;
      }
      iVar6 = (uint)*pbVar4 * 0x100 + param_1;
      pbVar8 = (byte *)(iVar6 + (uint)pbVar4[1] + 2);
    } while ((pbVar8 <= param_2) &&
            (pbVar7 = (byte *)(iVar6 + (uint)pbVar4[1]), pbVar4 = pbVar4 + 2,
            pbVar8 + (uint)pbVar7[1] * 2 + (uint)*pbVar7 * 0x200 <= param_2));
  }
  uVar3 = 0;
LAB_101e0aa9:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

