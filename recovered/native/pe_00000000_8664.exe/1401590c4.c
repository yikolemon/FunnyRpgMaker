/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401590c4 */

int FUN_1401590c4(byte *param_1,byte *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  local_34 = 0;
  iVar2 = 0;
  if (param_3[0xb] == 0) {
    pbVar1 = param_1 + 1;
    iVar2 = 8;
    if (pbVar1 <= param_2) {
      uVar6 = *param_1 & 0xf;
      uVar5 = (*param_1 >> 4) + uVar6;
      if (pbVar1 + (ulonglong)uVar5 * 2 <= param_2) {
        local_40 = &local_34;
        local_48 = 0;
        lVar3 = FUN_14012b8aa(*param_3,4,0,uVar5);
        iVar2 = local_34;
        if (local_34 == 0) {
          param_3[0xb] = lVar3;
          param_3[9] = lVar3 + (ulonglong)uVar6 * 4;
          iVar2 = 0;
          if (uVar5 != 0) {
            lVar4 = 0;
            do {
              *(uint *)(lVar3 + lVar4 * 4) =
                   (int)(short)((ushort)pbVar1[lVar4 * 2] << 8) | (uint)param_1[lVar4 * 2 + 2];
              lVar4 = lVar4 + 1;
              iVar2 = local_34;
            } while ((uint)lVar4 != uVar5);
          }
        }
      }
    }
  }
  if (DAT_140f17b40 != (local_30 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_30 ^ (ulonglong)auStack_68);
  }
  return iVar2;
}

