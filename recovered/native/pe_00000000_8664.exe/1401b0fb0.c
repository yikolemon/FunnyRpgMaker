/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b0fb0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1401b0fb0(__crt_locale_pointers *param_1,undefined8 param_2,undefined4 param_3,
                  ulonglong param_4,int param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_88 [64];
  undefined4 local_48 [2];
  longlong local_40;
  longlong local_38;
  char local_28;
  ulonglong local_20;
  
  puVar8 = auStack_88;
  puVar10 = auStack_88;
  puVar9 = auStack_88;
  local_20 = DAT_140f17b40 ^ (ulonglong)local_48;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,param_1);
  uVar1 = *(undefined4 *)(local_38 + 0xc);
  iVar3 = FUN_1401af6c0(param_2,param_3,0,0);
  if (iVar3 == 0) goto LAB_1401b10f2;
  uVar6 = (longlong)iVar3 * 2 + 0x10;
  uVar6 = -(ulonglong)((ulonglong)((longlong)iVar3 * 2) < uVar6) & uVar6;
  if (uVar6 == 0) {
    puVar7 = (undefined4 *)0x0;
LAB_1401b10da:
    puVar10 = puVar9;
    if (puVar7 == (undefined4 *)0x0) goto LAB_1401b10f2;
  }
  else {
    if (uVar6 < 0x401) {
      uVar4 = uVar6 + 0xf;
      if (uVar4 <= uVar6) {
        uVar4 = 0xffffffffffffff0;
      }
      lVar2 = -(uVar4 & 0xfffffffffffffff0);
      puVar9 = auStack_88 + lVar2;
      puVar8 = auStack_88 + lVar2;
      puVar5 = (undefined4 *)((longlong)local_48 + lVar2);
      puVar7 = (undefined4 *)0x0;
      if (puVar5 == (undefined4 *)0x0) goto LAB_1401b10da;
      *puVar5 = 0xcccc;
LAB_1401b1081:
      puVar7 = puVar5 + 4;
      puVar9 = puVar8;
    }
    else {
      puVar5 = (undefined4 *)_malloc_base(uVar6);
      puVar7 = (undefined4 *)0x0;
      puVar9 = auStack_88;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_1401b1081;
      }
    }
    if (puVar7 == (undefined4 *)0x0) goto LAB_1401b10da;
    *(undefined8 *)(puVar9 + -8) = 0x1401b109a;
    iVar3 = FUN_1401af6c0(param_2,param_3,puVar7,iVar3);
    if (iVar3 == 0) goto LAB_1401b10da;
    *(undefined8 *)(puVar9 + 0x38) = 0;
    *(undefined8 *)(puVar9 + 0x30) = 0;
    *(int *)(puVar9 + 0x28) = param_5;
    *(ulonglong *)(puVar9 + 0x20) = -(ulonglong)(param_5 != 0) & param_4;
    *(undefined8 *)(puVar9 + -8) = 0x1401b10d4;
    FUN_1401aeb80(uVar1,0,puVar7,0xffffffff);
  }
  puVar10 = puVar9;
  if (puVar7[-4] == 0xdddd) {
    *(undefined8 *)(puVar9 + -8) = 0x1401b10f2;
    FUN_1401aea30();
  }
LAB_1401b10f2:
  if (local_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
  uVar6 = local_20 ^ (ulonglong)local_48;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar10 + -8) = &UNK_1401b1111;
  FUN_140188a00(uVar6);
}

