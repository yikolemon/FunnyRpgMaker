/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f1a24 */

uint __fastcall FUN_100f1a24(undefined4 param_1)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  puVar2 = (uint *)FUN_10018d26(param_1);
  uVar4 = *puVar2;
  uVar3 = uVar4;
  switch(uVar4 & 3) {
  case 1:
    goto switchD_100f1a39_caseD_1;
  case 2:
    goto switchD_100f1a39_caseD_2;
  case 3:
switchD_100f1a39_caseD_3:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
switchD_100f1a39_caseD_0:
  do {
    puVar2 = (uint *)FUN_10018d26(param_1);
    LOCK();
    uVar3 = *puVar2;
    bVar6 = uVar4 == uVar3;
    if (bVar6) {
      *puVar2 = uVar4 | 1;
      uVar3 = uVar4;
    }
    UNLOCK();
    if (bVar6) {
      return uVar4;
    }
    uVar4 = uVar3;
    switch(uVar3 & 3) {
    case 1:
switchD_100f1a39_caseD_1:
      uVar5 = uVar3 & 0xfffffffc | 2;
      puVar2 = (uint *)FUN_10018d26(param_1);
      LOCK();
      uVar4 = *puVar2;
      bVar6 = uVar3 == uVar4;
      if (bVar6) {
        *puVar2 = uVar5;
        uVar4 = uVar3;
      }
      UNLOCK();
      uVar3 = uVar5;
      if (!bVar6) goto code_r0x100f1a8d;
    case 2:
      goto switchD_100f1a39_caseD_2;
    case 3:
      goto switchD_100f1a39_caseD_3;
    }
  } while( true );
code_r0x100f1a8d:
  uVar3 = uVar4;
  switch(uVar4 & 3) {
  case 0:
    goto switchD_100f1a39_caseD_0;
  case 2:
switchD_100f1a39_caseD_2:
    FUN_100f1af6(param_1,uVar3,0);
    puVar2 = (uint *)FUN_10018d26(param_1);
    uVar4 = *puVar2;
    uVar3 = uVar4;
    switch(uVar4 & 3) {
    case 0:
      goto switchD_100f1a39_caseD_0;
    case 2:
      goto switchD_100f1a39_caseD_2;
    case 3:
      goto switchD_100f1a39_caseD_3;
    }
    break;
  case 3:
    goto switchD_100f1a39_caseD_3;
  }
  goto switchD_100f1a39_caseD_1;
}

