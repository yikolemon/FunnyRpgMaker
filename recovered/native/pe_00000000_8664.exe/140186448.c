/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140186448 */

void FUN_140186448(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = FUN_140186410();
  if (iVar3 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    *(undefined4 *)(lVar2 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (*(uint *)(lVar2 + 0x10) != 0) {
      *(uint *)(param_1 + 0x4c) = *(uint *)(lVar2 + 0x10) & 1;
    }
    *(undefined8 *)(lVar2 + 8) = 0x3f34;
    *(undefined8 *)(lVar2 + 0x14) = 0xffffffff00000000;
    *(undefined4 *)(lVar2 + 0x1c) = 0x8000;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    lVar1 = lVar2 + 0x550;
    *(longlong *)(lVar2 + 0x88) = lVar1;
    *(longlong *)(lVar2 + 0x68) = lVar1;
    *(longlong *)(lVar2 + 0x60) = lVar1;
    *(undefined8 *)(lVar2 + 0x1be0) = 0xffffffff00000001;
  }
  return;
}

