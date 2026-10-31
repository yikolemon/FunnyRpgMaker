/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140164782 */

ulonglong FUN_140164782(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  char *_Str1;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_78 [36];
  int local_54;
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)param_1[1];
  plVar8 = (longlong *)(param_2 + 8);
  uVar6 = 0;
  do {
    if ((int)plVar8[-1] == 0) {
      _Str1 = (char *)FUN_140164a55(plVar2);
    }
    else {
      _Str1 = (char *)FUN_140164aaf(plVar2);
    }
    uVar7 = uVar6;
    local_50 = _Str1;
    if (_Str1 == (char *)0x0) break;
    if (5 < *(uint *)(plVar8 + -1)) goto LAB_1401648a5;
    lVar1 = (*plVar2 - (longlong)_Str1) + -1;
    switch(*(uint *)(plVar8 + -1)) {
    default:
      lVar5 = FUN_14012afda(*param_1);
      *plVar8 = lVar5;
      if (local_54 == 0) {
        FUN_1401c5180(lVar5,_Str1);
        *(undefined1 *)(*plVar8 + lVar1) = 0;
      }
      break;
    case 2:
      uVar3 = FUN_140164b99(&local_50,_Str1 + lVar1,0);
      goto LAB_140164873;
    case 3:
      uVar3 = FUN_140164ea4(&local_50,_Str1 + lVar1);
LAB_140164873:
      *(undefined4 *)plVar8 = uVar3;
      break;
    case 4:
      if (lVar1 == 4) {
        iVar4 = strncmp(_Str1,"true",4);
        bVar9 = iVar4 == 0;
      }
      else {
        bVar9 = false;
      }
      *(bool *)plVar8 = bVar9;
      break;
    case 5:
      if ((code *)param_1[3] != (code *)0x0) {
        uVar3 = (*(code *)param_1[3])(_Str1,lVar1,param_1[4]);
        goto LAB_140164873;
      }
      *(undefined4 *)plVar8 = 0;
    }
LAB_1401648a5:
    uVar6 = uVar6 + 1;
    plVar8 = plVar8 + 2;
    uVar7 = param_3 & 0xffffffff;
  } while ((param_3 & 0xffffffff) != uVar6);
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_78);
  }
  return uVar7 & 0xffffffff;
}

