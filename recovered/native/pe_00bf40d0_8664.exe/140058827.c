/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140058827 */

int FUN_140058827(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    iVar3 = 8;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x28);
    uVar2 = *(ushort *)((longlong)plVar1 + 0x62);
    if (*(uint *)(plVar1 + 1) <= (uint)*(ushort *)((longlong)plVar1 + 0x1a) + (uint)uVar2) {
      iVar3 = FUN_14001c730(plVar1,1,0);
      if (iVar3 != 0) {
        return iVar3;
      }
      uVar2 = *(ushort *)((longlong)plVar1 + 0x62);
    }
    *(undefined8 *)(plVar1[0xd] + (ulonglong)uVar2 * 8) = *param_2;
    *(undefined1 *)(plVar1[0xe] + (ulonglong)uVar2) = 1;
    *(short *)((longlong)plVar1 + 0x62) = *(short *)((longlong)plVar1 + 0x62) + 1;
    iVar3 = 0;
  }
  return iVar3;
}

