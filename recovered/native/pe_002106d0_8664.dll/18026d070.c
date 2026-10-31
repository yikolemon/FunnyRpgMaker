/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026d070 */

undefined8 FUN_18026d070(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  cVar3 = FUN_18023d870(0);
  if (cVar3 != '\0') {
    uVar4 = FUN_18023d7f0();
    bVar2 = true;
    if (DAT_180418078 != 0) {
      FUN_180246a40(7);
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return uVar7;
    }
    DAT_180418078 = 1;
    cVar3 = FUN_18023d930();
    if (cVar3 != '\0') {
      FUN_18026d510();
      FUN_18026d4c0();
      FUN_18026d4e0();
      iVar5 = FUN_18027f4d4(&DAT_18038be28,&DAT_18038be58);
      if (iVar5 == 0) {
        cVar3 = FUN_18023d9b0();
        if (cVar3 != '\0') {
          FUN_18027f49c(&DAT_18038bca8,&DAT_18038be20);
          DAT_180418078 = 2;
          bVar2 = false;
        }
      }
    }
    FUN_18023d840(uVar4);
    if (!bVar2) {
      plVar6 = (longlong *)FUN_18026d500();
      if (*plVar6 != 0) {
        cVar3 = FUN_18023d750(plVar6);
        if (cVar3 != '\0') {
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(param_1,2,param_2);
        }
      }
      DAT_180420d48 = DAT_180420d48 + 1;
      return 1;
    }
  }
  return 0;
}

