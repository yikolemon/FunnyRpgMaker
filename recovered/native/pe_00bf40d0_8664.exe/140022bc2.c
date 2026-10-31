/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140022bc2 */

char FUN_140022bc2(longlong *param_1,longlong param_2,int param_3,longlong *param_4,longlong param_5
                  )

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStackY_188 [32];
  longlong *local_140;
  uint local_138 [6];
  longlong local_120;
  int local_f8 [12];
  uint local_c8 [12];
  longlong local_98 [10];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_188;
  lVar1 = *param_1;
  FUN_140020ebc(param_1,param_2,*(undefined8 *)(param_5 + 0x18),local_98,(longlong)local_c8,local_f8
               );
  iVar7 = 2;
  uVar11 = 0;
  bVar2 = false;
  do {
    uVar6 = FUN_140023281(uVar11 & 0xffffffff);
    cVar5 = (char)uVar6;
    if (((cVar5 == '\0') || (bVar3 = true, !bVar2)) && (bVar3 = bVar2, local_f8[uVar11] == 0)) {
      local_138[0] = 4;
      local_120 = local_98[uVar11];
      if (local_120 == 0) {
        local_120 = *(longlong *)(param_5 + 0x18);
      }
      iVar7 = FUN_14001cf06(param_1,local_138,&local_140);
      plVar4 = local_140;
      if ((char)iVar7 == 'Q') {
        bVar3 = true;
      }
      if (cVar5 == '\0') {
        bVar3 = bVar2;
      }
      if (iVar7 == 0) {
        uVar8 = FUN_140022a21(param_1,local_140,local_c8[uVar11],param_3,param_4);
        iVar9 = 0;
        FUN_14001d05c((longlong)plVar4,0);
        iVar7 = (int)uVar8;
        if (iVar7 == 0) break;
        bVar3 = bVar2;
        if (cVar5 != '\0') {
          bVar3 = true;
        }
      }
    }
    bVar2 = bVar3;
    uVar11 = uVar11 + 1;
    iVar9 = iVar7;
  } while (uVar11 != 9);
  lVar10 = 0;
  do {
    if (local_98[lVar10] != 0) {
      FUN_14001c53d(lVar1,local_98[lVar10]);
      local_98[lVar10] = 0;
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 9);
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_188)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_188);
  }
  return (iVar9 != 0) * '\x02';
}

