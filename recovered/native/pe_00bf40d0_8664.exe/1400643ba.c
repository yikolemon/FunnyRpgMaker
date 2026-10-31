/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400643ba */

int FUN_1400643ba(longlong param_1)

{
  ushort *puVar1;
  longlong *plVar2;
  ushort uVar3;
  int iVar4;
  
  puVar1 = *(ushort **)(param_1 + 0x28);
  if (puVar1 == (ushort *)0x0) {
    return 3;
  }
  if (*(char *)(param_1 + 0x59) != '\0') {
    plVar2 = *(longlong **)(param_1 + 0x18);
    if ((*(uint *)((longlong)plVar2 + 0xc) <=
         (uint)*(ushort *)(plVar2 + 0xc) + (uint)*(ushort *)(plVar2 + 3)) &&
       (iVar4 = FUN_14001c730(plVar2,0,1), iVar4 != 0)) {
      return iVar4;
    }
    if (*puVar1 == 0) {
      uVar3 = 1;
      goto LAB_14006441b;
    }
    *(ushort *)(*(longlong *)(puVar1 + 0xc) + (ulonglong)(*puVar1 - 1) * 2) = puVar1[1] - 1;
  }
  uVar3 = (short)*(undefined4 *)puVar1 + 1;
LAB_14006441b:
  *puVar1 = uVar3;
  return 0;
}

