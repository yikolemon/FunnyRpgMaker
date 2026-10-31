/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140081030 */

int FUN_140081030(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStackY_68 [32];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStackY_68;
  iVar4 = 0x84;
  if ((int)param_3 == 0) {
    if (*(char *)(param_1 + 0x79) == '\0') {
      iVar4 = 0x9e;
    }
    else {
      lVar2 = **(longlong **)(param_1 + 8);
      pcVar3 = *(code **)(param_1 + 0x90);
      if (*(char *)(param_1 + 0x78) == '\0') {
        local_34 = (**(code **)(param_1 + 0x80))(param_1 + 0xa0);
        *(undefined1 *)(param_1 + 0x78) = 1;
      }
      FUN_140081284(param_1,param_2,(int)CONCAT71((int7)((ulonglong)param_3 >> 8),1));
      lVar5 = FUN_14001c617(lVar2,*(uint *)(param_2 + 0x70),0,*(uint *)(param_2 + 0x68),0,&local_34)
      ;
      *(longlong *)(param_2 + 0x78) = lVar5;
      iVar4 = local_34;
      if (local_34 == 0) {
        local_34 = (*pcVar3)(param_2,param_1 + 0xa0);
        if (local_34 == 0) {
          puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
          *puVar1 = *puVar1 | 1;
          iVar4 = 0;
        }
        else {
          FUN_14001c53d(lVar2,*(longlong *)(param_2 + 0x78));
          *(undefined8 *)(param_2 + 0x78) = 0;
          iVar4 = local_34;
        }
      }
    }
  }
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStackY_68)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStackY_68);
}

