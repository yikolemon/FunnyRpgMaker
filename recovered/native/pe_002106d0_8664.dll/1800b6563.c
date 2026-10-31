/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b6563 */

undefined8 * FUN_1800b6563(undefined8 *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  pcVar11 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pcVar11 = *(char **)param_2;
  }
  pcVar10 = pcVar11 + *(longlong *)(param_2 + 0x10);
  iVar7 = -1;
  do {
    uVar6 = local_58;
    if (pcVar11 == pcVar10) {
      if (iVar7 < 0) {
        local_58 = 0;
        uVar2 = (undefined4)local_68;
        uVar3 = local_68._4_4_;
        uVar4 = (undefined4)uStack_60;
        uVar5 = uStack_60._4_4_;
        local_68 = 0;
        uStack_60 = 0;
        *(undefined4 *)param_1 = uVar2;
        *(undefined4 *)((longlong)param_1 + 4) = uVar3;
        *(undefined4 *)(param_1 + 1) = uVar4;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
        param_1[2] = uVar6;
      }
      else {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
LAB_1800b6683:
      FUN_180004cea(&local_68);
      return param_1;
    }
    cVar1 = *pcVar11;
    iVar8 = (int)cVar1;
    if (iVar8 == 0x3f) {
      if (-1 < iVar7) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_1800b6683;
      }
      local_41 = 1;
      local_48 = 0;
      FUN_1800b6b48(&local_68,&local_48,&local_41);
      iVar9 = -1;
    }
    else {
      if ((byte)(cVar1 - 0x30U) < 10) {
        iVar9 = iVar8 + -0x30;
      }
      else if ((byte)(cVar1 + 0x9fU) < 6) {
        iVar9 = iVar8 + -0x57;
      }
      else {
        iVar9 = iVar7;
        if (5 < (byte)(cVar1 + 0xbfU)) goto LAB_1800b6638;
        iVar9 = iVar8 + -0x37;
      }
      if (-1 < iVar7) {
        local_48 = CONCAT31(local_48._1_3_,(byte)iVar9 | (byte)(iVar7 << 4));
        FUN_1800b6d86(&local_68,&local_48);
        iVar9 = -1;
      }
    }
LAB_1800b6638:
    iVar7 = iVar9;
    pcVar11 = pcVar11 + 1;
  } while( true );
}

