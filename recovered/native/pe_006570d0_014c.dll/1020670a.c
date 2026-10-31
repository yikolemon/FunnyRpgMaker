/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020670a */

int __fastcall FUN_1020670a(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  char *_Str1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  int *local_24;
  undefined4 *local_20;
  int iStack_1c;
  char *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  piVar4 = (int *)param_1[1];
  iVar5 = 0;
  local_24 = piVar4;
  local_20 = param_1;
  do {
    if (*(int *)(param_2 + iVar5 * 8) == 0) {
      _Str1 = (char *)FUN_10206972();
    }
    else {
      _Str1 = (char *)FUN_102069bc();
    }
    iVar3 = iVar5;
    local_18 = _Str1;
    if (_Str1 == (char *)0x0) break;
    uVar1 = *(uint *)(param_2 + iVar5 * 8);
    if (5 < uVar1) goto LAB_102067dc;
    iVar3 = (*piVar4 - (int)_Str1) + -1;
    switch(uVar1) {
    default:
      uVar2 = FUN_101c21f6(*local_20,*piVar4 - (int)_Str1,&iStack_1c);
      *(undefined4 *)(param_2 + 4 + iVar5 * 8) = uVar2;
      piVar4 = local_24;
      if (iStack_1c == 0) {
        FUN_1025b2d0(uVar2,_Str1,iVar3);
        *(undefined1 *)(*(int *)(param_2 + 4 + iVar5 * 8) + iVar3) = 0;
        piVar4 = local_24;
      }
      break;
    case 2:
      uVar2 = FUN_10206a7e(0);
      goto LAB_102067d5;
    case 3:
      uVar2 = FUN_10206d76();
LAB_102067d5:
      *(undefined4 *)(param_2 + 4 + iVar5 * 8) = uVar2;
      piVar4 = local_24;
      break;
    case 4:
      if (iVar3 == 4) {
        iVar3 = _strncmp(_Str1,"true",4);
        bVar6 = iVar3 == 0;
      }
      else {
        bVar6 = false;
      }
      *(bool *)(param_2 + 4 + iVar5 * 8) = bVar6;
      piVar4 = local_24;
      break;
    case 5:
      if ((code *)local_20[3] != (code *)0x0) {
        uVar2 = (*(code *)local_20[3])(_Str1,iVar3,local_20[4]);
        goto LAB_102067d5;
      }
      *(undefined4 *)(param_2 + 4 + iVar5 * 8) = 0;
      piVar4 = local_24;
    }
LAB_102067dc:
    iVar5 = iVar5 + 1;
    iVar3 = param_3;
  } while (param_3 != iVar5);
  if (DAT_10388d00 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar3;
}

