/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401591bb */

int FUN_1401591bb(byte *param_1,byte *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  local_34 = 0;
  uVar5 = *param_3;
  puVar6 = (undefined8 *)FUN_140128a1f(uVar5,0x20,&local_34);
  iVar7 = local_34;
  if (local_34 == 0) {
    pbVar1 = param_1 + 4;
    if (pbVar1 <= param_2) {
      bVar2 = *param_1;
      *(byte *)(puVar6 + 1) = bVar2;
      *(ushort *)((longlong)puVar6 + 10) =
           *(ushort *)(param_1 + 1) << 8 | *(ushort *)(param_1 + 1) >> 8;
      bVar3 = param_1[3];
      *(byte *)((longlong)puVar6 + 9) = bVar3;
      puVar6[2] = pbVar1 + ((ulonglong)*(uint *)(param_3 + 1) - param_3[0x1b]);
      uVar9 = (bVar3 & 1) * 2 + 3 + (uint)((bVar3 >> 1 & 1) != 0);
      *(uint *)((longlong)puVar6 + 0xc) = uVar9;
      uVar8 = (uint)bVar2;
      if (pbVar1 + uVar9 * uVar8 <= param_2) {
        if (uVar8 == 0) {
          FUN_140128b39(uVar5,puVar6);
          iVar7 = local_34;
        }
        else {
          if ((bVar3 & 1) == 0) {
            *(uint *)(puVar6 + 3) = (uint)param_1[4] << 0x10 | (uint)param_1[5];
            lVar10 = (ulonglong)uVar9 * (ulonglong)(bVar2 - 1);
            uVar8 = (uint)param_1[lVar10 + 4] << 0x10 | (uint)param_1[lVar10 + 5];
          }
          else {
            uVar4 = *(uint *)(param_1 + 4);
            *(uint *)(puVar6 + 3) =
                 uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
            uVar8 = *(uint *)(param_1 + (ulonglong)uVar9 * (ulonglong)(uVar8 - 1) + 4);
            uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
          }
          *(uint *)((longlong)puVar6 + 0x1c) = uVar8;
          *puVar6 = 0;
          *(undefined8 **)param_3[0x19] = puVar6;
          param_3[0x19] = puVar6;
          *(uint *)(param_3 + 0x17) = *(int *)(param_3 + 0x17) + (uint)*(byte *)(puVar6 + 1);
          iVar7 = 0;
        }
        goto LAB_14015926b;
      }
    }
    FUN_140128b39(uVar5,puVar6);
    iVar7 = 8;
  }
LAB_14015926b:
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}

