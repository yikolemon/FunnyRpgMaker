/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001b038 */

undefined1 * FUN_18001b038(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*param_3);
  if ((*(byte *)(param_1 + 0xe1) & 1) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 8);
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,uVar5 & 0xffffffff);
    uVar5 = (ulonglong)uVar3;
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    puVar4 = (undefined1 *)
             FUN_18001b598(uVar5 & 0xffffffff,param_3,*(undefined8 *)(param_1 + 0xd8),
                           *(longlong *)(param_2 + 0x20),*(undefined8 *)(param_1 + 200),
                           *(undefined4 *)(param_1 + 0xe0));
    if (puVar4 != param_3) {
      uVar3 = 1;
      goto LAB_18001b108;
    }
  }
  puVar4 = param_3 + 1;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    if ((*(byte *)(param_1 + 0xe1) & 8) == 0) {
      cVar2 = FUN_18001b8f9(uVar5 & 0xffffffff);
    }
    else {
      cVar2 = FUN_18001b6e3(uVar5 & 0xffffffff,*(longlong *)(param_2 + 0x38),
                            *(undefined8 *)(param_1 + 200));
    }
    uVar3 = 1;
    if (cVar2 != '\0') goto LAB_18001b108;
  }
  if (*(longlong *)(param_2 + 0x28) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)((*(byte *)(*(longlong *)(param_2 + 0x28) + ((uVar5 & 0xff) >> 3)) >>
                    ((uint)(uVar5 & 0xff) & 7) & 1) != 0);
  }
LAB_18001b108:
  if (uVar3 == (*(uint *)(param_2 + 0xc) & 1)) {
    puVar4 = param_3;
  }
  return puVar4;
}

