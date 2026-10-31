/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005888b */

void FUN_14005888b(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  FUN_14005897f(param_1);
  *(undefined1 *)(param_1 + 0x30) = 1;
  if ((*(uint *)(plVar1 + 1) <=
       (uint)*(ushort *)((longlong)plVar1 + 0x62) + (uint)*(ushort *)((longlong)plVar1 + 0x1a)) ||
     (*(uint *)((longlong)plVar1 + 0xc) <=
      (uint)*(ushort *)(plVar1 + 0xc) + (uint)*(ushort *)(plVar1 + 3))) {
    iVar2 = FUN_14001c730(plVar1,1,1);
    if (iVar2 != 0) {
      return;
    }
  }
  FUN_140058827(param_1,param_2);
  return;
}

