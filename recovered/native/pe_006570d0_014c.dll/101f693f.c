/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f693f */

undefined4 __fastcall FUN_101f693f(int *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(*param_1 + 0x2c8))[0x301];
  iVar3 = FUN_101c0dab(**(undefined4 **)(*param_1 + 0x2c8),"pshinter");
  if ((puVar1 == (undefined4 *)0x0 || iVar3 == 0) ||
     (pcVar2 = (code *)*puVar1, pcVar2 == (code *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*pcVar2)(iVar3);
  }
  return uVar4;
}

