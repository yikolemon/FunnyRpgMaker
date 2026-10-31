/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f60e2 */

ulonglong FUN_1800f60e2(undefined8 param_1)

{
  code *pcVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  puVar2 = (ulonglong *)FUN_1800188ac();
  uVar4 = *puVar2;
  uVar3 = uVar4;
  switch((uint)uVar4 & 3) {
  case 1:
    goto switchD_1800f6109_caseD_1;
  case 2:
    goto switchD_1800f6109_caseD_2;
  case 3:
switchD_1800f6109_caseD_3:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
switchD_1800f6109_caseD_0:
  do {
    puVar2 = (ulonglong *)FUN_1800188ac(param_1);
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
    switch((uint)uVar3 & 3) {
    case 1:
switchD_1800f6109_caseD_1:
      uVar5 = uVar3 & 0xfffffffffffffffc | 2;
      puVar2 = (ulonglong *)FUN_1800188ac(param_1);
      LOCK();
      uVar4 = *puVar2;
      bVar6 = uVar3 == uVar4;
      if (bVar6) {
        *puVar2 = uVar5;
        uVar4 = uVar3;
      }
      UNLOCK();
      uVar3 = uVar5;
      if (!bVar6) goto code_r0x0001800f616c;
    case 2:
      goto switchD_1800f6109_caseD_2;
    case 3:
      goto switchD_1800f6109_caseD_3;
    }
  } while( true );
code_r0x0001800f616c:
  uVar3 = uVar4;
  switch((uint)uVar4 & 3) {
  case 0:
    goto switchD_1800f6109_caseD_0;
  case 2:
switchD_1800f6109_caseD_2:
    FUN_1800f61d7(param_1,uVar3,0);
    puVar2 = (ulonglong *)FUN_1800188ac(param_1);
    uVar4 = *puVar2;
    uVar3 = uVar4;
    switch((uint)uVar4 & 3) {
    case 0:
      goto switchD_1800f6109_caseD_0;
    case 2:
      goto switchD_1800f6109_caseD_2;
    case 3:
      goto switchD_1800f6109_caseD_3;
    }
    break;
  case 3:
    goto switchD_1800f6109_caseD_3;
  }
  goto switchD_1800f6109_caseD_1;
}

