/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400626d2 */

ulonglong FUN_1400626d2(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  byte *_Str1;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint *puVar7;
  bool bVar8;
  undefined1 auStack_78 [36];
  int local_54;
  byte *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)param_1[1];
  puVar7 = (uint *)(param_2 + 8);
  uVar5 = 0;
  do {
    if (puVar7[-2] == 0) {
      _Str1 = (byte *)FUN_1400629a5(plVar1);
    }
    else {
      _Str1 = FUN_1400629ff(plVar1);
    }
    uVar6 = uVar5;
    local_50 = _Str1;
    if (_Str1 == (byte *)0x0) break;
    if (5 < puVar7[-2]) goto LAB_1400627f5;
    uVar6 = (*plVar1 - (longlong)_Str1) - 1;
    switch(puVar7[-2]) {
    default:
      puVar4 = (undefined8 *)FUN_14001e961(*param_1,(int)(*plVar1 - (longlong)_Str1),&local_54);
      *(undefined8 **)puVar7 = puVar4;
      if (local_54 == 0) {
        FUN_1400b3550(puVar4,(undefined8 *)_Str1,uVar6);
        *(undefined1 *)(*(longlong *)puVar7 + uVar6) = 0;
      }
      break;
    case 2:
      uVar2 = FUN_140062ae9((ulonglong *)&local_50,_Str1 + uVar6,0);
      goto LAB_1400627c3;
    case 3:
      uVar2 = FUN_140062df4(&local_50,_Str1 + uVar6);
LAB_1400627c3:
      *puVar7 = uVar2;
      break;
    case 4:
      if (uVar6 == 4) {
        iVar3 = strncmp((char *)_Str1,"true",4);
        bVar8 = iVar3 == 0;
      }
      else {
        bVar8 = false;
      }
      *(bool *)puVar7 = bVar8;
      break;
    case 5:
      if ((code *)param_1[3] != (code *)0x0) {
        uVar2 = (*(code *)param_1[3])(_Str1,uVar6);
        goto LAB_1400627c3;
      }
      *puVar7 = 0;
    }
LAB_1400627f5:
    uVar5 = uVar5 + 1;
    puVar7 = puVar7 + 4;
    uVar6 = param_3 & 0xffffffff;
  } while ((param_3 & 0xffffffff) != uVar5);
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_78);
  }
  return uVar6 & 0xffffffff;
}

