/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400588f4 */

int FUN_1400588f4(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    iVar5 = 8;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x28);
    uVar1 = *(ushort *)((longlong)plVar2 + 0x62);
    if (*(uint *)(plVar2 + 1) < (uint)*(ushort *)((longlong)plVar2 + 0x1a) + (uint)uVar1 + 3) {
      iVar5 = FUN_14001c730(plVar2,3,0);
      if (iVar5 != 0) {
        return iVar5;
      }
      uVar1 = *(ushort *)((longlong)plVar2 + 0x62);
    }
    uVar6 = (ulonglong)uVar1;
    lVar3 = plVar2[0xd];
    lVar4 = plVar2[0xe];
    *(undefined8 *)(lVar3 + uVar6 * 8) = *param_2;
    *(undefined8 *)(lVar3 + 8 + uVar6 * 8) = *param_3;
    *(undefined8 *)(lVar3 + 0x10 + uVar6 * 8) = *param_4;
    *(undefined2 *)(lVar4 + uVar6) = 0x202;
    *(undefined1 *)(lVar4 + 2 + uVar6) = 1;
    *(short *)((longlong)plVar2 + 0x62) = *(short *)((longlong)plVar2 + 0x62) + 3;
    iVar5 = 0;
  }
  return iVar5;
}

