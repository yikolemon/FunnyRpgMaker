/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101fa55f */

undefined4 __fastcall FUN_101fa55f(int *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)(*param_1 + 0x140);
  iVar3 = FUN_101c0dab(*(undefined4 *)(*(int *)(*param_1 + 0x60) + 4),"pshinter");
  if ((puVar1 == (undefined4 *)0x0 || iVar3 == 0) ||
     (pcVar2 = (code *)*puVar1, pcVar2 == (code *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*pcVar2)(iVar3);
  }
  return uVar4;
}

