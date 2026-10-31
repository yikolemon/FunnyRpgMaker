/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140084038 */

void FUN_140084038(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined7 extraout_var;
  
  bVar3 = FUN_140084000(param_1);
  if ((int)CONCAT71(extraout_var,bVar3) == 0) {
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

