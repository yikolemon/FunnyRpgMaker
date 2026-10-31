/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012f793 */

char FUN_14012f793(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_188 [32];
  undefined4 *local_168;
  int *local_160;
  undefined4 local_14c;
  undefined4 *local_148;
  undefined8 local_140;
  undefined4 local_138 [6];
  longlong local_120;
  int local_f8 [12];
  undefined4 local_c8 [12];
  longlong local_98 [10];
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_188;
  uVar1 = *param_1;
  local_160 = local_f8;
  local_168 = local_c8;
  local_14c = param_3;
  local_148 = param_4;
  FUN_14012da8d(param_1,param_2,*(undefined8 *)(param_5 + 0x18),local_98);
  iVar6 = 2;
  uVar9 = 0;
  bVar2 = false;
  do {
    cVar5 = FUN_14012fe52(uVar9 & 0xffffffff);
    if (((cVar5 == '\0') || (bVar4 = true, !bVar2)) && (bVar4 = bVar2, local_f8[uVar9] == 0)) {
      local_138[0] = 4;
      local_120 = local_98[uVar9];
      if (local_120 == 0) {
        local_120 = *(longlong *)(param_5 + 0x18);
      }
      iVar6 = FUN_140129502(param_1,local_138,&local_140);
      uVar3 = local_140;
      if ((char)iVar6 == 'Q') {
        bVar4 = true;
      }
      if (cVar5 == '\0') {
        bVar4 = bVar2;
      }
      if (iVar6 == 0) {
        local_168 = local_148;
        iVar7 = FUN_14012f5f2(param_1,local_140,local_c8[uVar9],local_14c);
        iVar6 = 0;
        FUN_140129658(uVar3,0);
        if (iVar7 == 0) break;
        iVar6 = iVar7;
        bVar4 = bVar2;
        if (cVar5 != '\0') {
          bVar4 = true;
        }
      }
    }
    bVar2 = bVar4;
    uVar9 = uVar9 + 1;
  } while (uVar9 != 9);
  lVar8 = 0;
  do {
    if (local_98[lVar8] != 0) {
      FUN_140128b39(uVar1);
      local_98[lVar8] = 0;
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 9);
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_188)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_188);
  }
  return (iVar6 != 0) * '\x02';
}

