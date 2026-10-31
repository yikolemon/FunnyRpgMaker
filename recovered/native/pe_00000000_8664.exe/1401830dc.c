/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401830dc */

int FUN_1401830dc(longlong param_1,longlong param_2,int param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  iVar4 = 0x84;
  if (param_3 == 0) {
    if (*(char *)(param_1 + 0x79) == '\0') {
      iVar4 = 0x9e;
    }
    else {
      uVar2 = **(undefined8 **)(param_1 + 8);
      pcVar3 = *(code **)(param_1 + 0x90);
      if (*(char *)(param_1 + 0x78) == '\0') {
        local_34 = (**(code **)(param_1 + 0x80))(param_1 + 0xa0);
        *(undefined1 *)(param_1 + 0x78) = 1;
      }
      FUN_140183330(param_1,param_2,1);
      local_40 = &local_34;
      local_48 = 0;
      uVar5 = FUN_140128c13(uVar2,*(undefined4 *)(param_2 + 0x70),0,*(undefined4 *)(param_2 + 0x68))
      ;
      *(undefined8 *)(param_2 + 0x78) = uVar5;
      iVar4 = local_34;
      if (local_34 == 0) {
        local_34 = (*pcVar3)(param_2,param_1 + 0xa0);
        if (local_34 == 0) {
          puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
          *puVar1 = *puVar1 | 1;
          iVar4 = 0;
        }
        else {
          FUN_140128b39(uVar2,*(undefined8 *)(param_2 + 0x78));
          *(undefined8 *)(param_2 + 0x78) = 0;
          iVar4 = local_34;
        }
      }
    }
  }
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_68)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_68);
}

