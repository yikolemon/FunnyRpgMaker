/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a4a5c */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404a4a5c(__crt_locale_pointers *param_1,undefined4 param_2,undefined8 param_3,
                  undefined4 param_4,undefined8 param_5,int param_6,int param_7)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58 [2];
  longlong local_50;
  longlong local_48;
  char local_38;
  ulonglong local_30;
  
  puVar8 = auStack_88;
  puVar10 = auStack_88;
  puVar9 = auStack_88;
  local_30 = ram0x000140613b10 ^ (ulonglong)local_58;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_50,param_1);
  if (param_6 == 0) {
    param_6 = *(int *)(local_48 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  iVar2 = FUN_1404a23d0(param_6,(-(param_7 != 0) & 8U) + 1,param_3,param_4);
  if (iVar2 == 0) goto LAB_1404a4bb2;
  uVar6 = (longlong)iVar2 * 2;
  uVar5 = -(ulonglong)(uVar6 < uVar6 + 0x10) & uVar6 + 0x10;
  if (uVar5 == 0) {
    puVar7 = (undefined4 *)0x0;
LAB_1404a4b9a:
    puVar10 = puVar9;
    if (puVar7 == (undefined4 *)0x0) goto LAB_1404a4bb2;
  }
  else {
    if (uVar5 < 0x401) {
      uVar3 = uVar5 + 0xf;
      if (uVar3 <= uVar5) {
        uVar3 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar3 & 0xfffffffffffffff0);
      puVar9 = auStack_88 + lVar1;
      puVar8 = auStack_88 + lVar1;
      puVar4 = (undefined4 *)((longlong)local_58 + lVar1);
      puVar7 = (undefined4 *)0x0;
      if (puVar4 == (undefined4 *)0x0) goto LAB_1404a4b9a;
      *puVar4 = 0xcccc;
LAB_1404a4b48:
      puVar7 = puVar4 + 4;
      puVar9 = puVar8;
    }
    else {
      puVar4 = (undefined4 *)_malloc_base();
      puVar7 = (undefined4 *)0x0;
      puVar9 = auStack_88;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_1404a4b48;
      }
    }
    if (puVar7 == (undefined4 *)0x0) goto LAB_1404a4b9a;
    *(undefined8 *)(puVar9 + -8) = 0x1404a4b5e;
    FUN_1404b9e70(puVar7,0,uVar6);
    *(int *)(puVar9 + 0x28) = iVar2;
    *(undefined4 **)(puVar9 + 0x20) = puVar7;
    *(undefined8 *)(puVar9 + -8) = 0x1404a4b7a;
    iVar2 = FUN_1404a23d0(param_6,1,param_3,param_4);
    if (iVar2 == 0) goto LAB_1404a4b9a;
    *(undefined8 *)(puVar9 + -8) = 0x1404a4b94;
    (*(code *)s_GetShortPathNameW_14059dfd0._8_8_)(param_2,puVar7,iVar2,param_5);
  }
  puVar10 = puVar9;
  if (puVar7[-4] == 0xdddd) {
    *(undefined8 *)(puVar9 + -8) = 0x1404a4bb2;
    FUN_1404a2310();
  }
LAB_1404a4bb2:
  if (local_38 != '\0') {
    *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
  }
  uVar6 = local_30 ^ (ulonglong)local_58;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar10 + -8) = &UNK_1404a4bd1;
  FUN_14044aba0(uVar6);
}

