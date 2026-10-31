/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003106e */

void FUN_14003106e(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint *puVar7;
  byte *pbVar8;
  undefined1 uVar9;
  int iVar10;
  undefined1 auStackY_98 [32];
  uint local_64;
  uint local_60;
  int local_5c;
  byte local_58 [8];
  char acStack_50 [8];
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_98;
  local_5c = 0;
  local_58 = (byte  [8])s_kclOhkrOegsOamsOghoRruaSwahShniS_1400f23c0._80_8_;
  acStack_50 = (char  [8])s_kclOhkrOegsOamsOghoRruaSwahShniS_1400f23c0._88_8_;
  local_48 = 0x392038;
  lVar1 = param_1[6];
  uVar6 = FUN_14002fd6a(lVar1);
  if ((char)uVar6 == '\0') {
    puVar7 = &local_60;
  }
  else {
    puVar7 = (uint *)FUN_140030328(lVar1);
  }
  iVar10 = 0;
  pbVar8 = local_58;
  bVar2 = false;
  while ((((pbVar8 = (byte *)FUN_14003039c(pbVar8,param_1,puVar7,&local_64), iVar4 = iVar10,
           1 < local_64 ||
           (iVar5 = FUN_140030754((longlong)param_1,puVar7,0,&local_5c,(undefined4 *)0x0),
           iVar5 == 0)) || (bVar3 = !bVar2, bVar2 = true, iVar4 = local_5c, bVar3)) ||
         (iVar4 = iVar10, local_5c == iVar10))) {
    iVar10 = iVar4;
    if (*pbVar8 == 0) {
      uVar9 = 1;
LAB_140031135:
      FUN_14003035d(param_1[6],puVar7);
      *(undefined1 *)(param_1 + 5) = uVar9;
      if (DAT_14012ea80 != (local_40 ^ (ulonglong)auStackY_98)) {
                    /* WARNING: Subroutine does not return */
        FUN_140086440(local_40 ^ (ulonglong)auStackY_98);
      }
      return;
    }
  }
  uVar9 = 0;
  goto LAB_140031135;
}

