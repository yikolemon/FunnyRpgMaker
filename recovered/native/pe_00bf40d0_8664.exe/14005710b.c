/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005710b */

int FUN_14005710b(byte *param_1,byte *param_2,longlong *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined1 (*pauVar5) [32];
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  local_34 = 0;
  lVar9 = *param_3;
  pauVar5 = FUN_14001c423(lVar9,0x20,&local_34);
  iVar6 = local_34;
  if (local_34 == 0) {
    pbVar1 = param_1 + 4;
    if (pbVar1 <= param_2) {
      bVar2 = *param_1;
      (*pauVar5)[8] = bVar2;
      *(ushort *)(*pauVar5 + 10) = *(ushort *)(param_1 + 1) << 8 | *(ushort *)(param_1 + 1) >> 8;
      bVar3 = param_1[3];
      (*pauVar5)[9] = bVar3;
      *(byte **)(*pauVar5 + 0x10) = pbVar1 + ((ulonglong)*(uint *)(param_3 + 1) - param_3[0x1b]);
      uVar8 = (bVar3 & 1) * 2 + 3 + (uint)((bVar3 >> 1 & 1) != 0);
      *(uint *)(*pauVar5 + 0xc) = uVar8;
      uVar7 = (uint)bVar2;
      if (pbVar1 + uVar8 * uVar7 <= param_2) {
        if (uVar7 == 0) {
          FUN_14001c53d(lVar9,(longlong)pauVar5);
          iVar6 = local_34;
        }
        else {
          if ((bVar3 & 1) == 0) {
            *(uint *)(*pauVar5 + 0x18) = (uint)param_1[4] << 0x10 | (uint)param_1[5];
            lVar9 = (ulonglong)uVar8 * (ulonglong)(bVar2 - 1);
            uVar7 = (uint)param_1[lVar9 + 4] << 0x10 | (uint)param_1[lVar9 + 5];
          }
          else {
            uVar4 = *(uint *)(param_1 + 4);
            *(uint *)(*pauVar5 + 0x18) =
                 uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
            uVar7 = *(uint *)(param_1 + (ulonglong)uVar8 * (ulonglong)(uVar7 - 1) + 4);
            uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
          }
          *(uint *)(*pauVar5 + 0x1c) = uVar7;
          *(undefined8 *)*pauVar5 = 0;
          *(undefined1 (**) [32])param_3[0x19] = pauVar5;
          param_3[0x19] = (longlong)pauVar5;
          *(uint *)(param_3 + 0x17) = (int)param_3[0x17] + (uint)(byte)(*pauVar5)[8];
          iVar6 = 0;
        }
        goto LAB_1400571bb;
      }
    }
    FUN_14001c53d(lVar9,(longlong)pauVar5);
    iVar6 = 8;
  }
LAB_1400571bb:
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

