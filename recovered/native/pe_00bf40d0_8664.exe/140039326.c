/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140039326 */

void FUN_140039326(longlong param_1)

{
  longlong lVar1;
  undefined1 (*pauVar2) [32];
  HMODULE hModule;
  FARPROC pFVar3;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x48) = 0;
  pauVar2 = FUN_14001c423(lVar1,0x110,&local_2c);
  if (local_2c == 0) {
    FUN_1400b3c00(pauVar2,0,0x110);
    hModule = LoadLibraryA("libharfbuzz-0.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar3 = GetProcAddress(hModule,"hb_version_atleast");
      if (pFVar3 != (FARPROC)0x0) {
        pFVar3 = GetProcAddress(hModule,"hb_blob_create");
        *(FARPROC *)*pauVar2 = pFVar3;
        if (pFVar3 != (FARPROC)0x0) {
          pFVar3 = GetProcAddress(hModule,"hb_blob_destroy");
          *(FARPROC *)(*pauVar2 + 8) = pFVar3;
          if (pFVar3 != (FARPROC)0x0) {
            pFVar3 = GetProcAddress(hModule,"hb_buffer_add_utf8");
            *(FARPROC *)(*pauVar2 + 0x10) = pFVar3;
            if (pFVar3 != (FARPROC)0x0) {
              pFVar3 = GetProcAddress(hModule,"hb_buffer_clear_contents");
              *(FARPROC *)(*pauVar2 + 0x18) = pFVar3;
              if (pFVar3 != (FARPROC)0x0) {
                pFVar3 = GetProcAddress(hModule,"hb_buffer_create");
                *(FARPROC *)pauVar2[1] = pFVar3;
                if (pFVar3 != (FARPROC)0x0) {
                  pFVar3 = GetProcAddress(hModule,"hb_buffer_destroy");
                  *(FARPROC *)(pauVar2[1] + 8) = pFVar3;
                  if (pFVar3 != (FARPROC)0x0) {
                    pFVar3 = GetProcAddress(hModule,"hb_buffer_get_glyph_infos");
                    *(FARPROC *)(pauVar2[1] + 0x10) = pFVar3;
                    if (pFVar3 != (FARPROC)0x0) {
                      pFVar3 = GetProcAddress(hModule,"hb_buffer_get_glyph_positions");
                      *(FARPROC *)(pauVar2[1] + 0x18) = pFVar3;
                      if (pFVar3 != (FARPROC)0x0) {
                        pFVar3 = GetProcAddress(hModule,"hb_buffer_get_length");
                        *(FARPROC *)pauVar2[2] = pFVar3;
                        if (pFVar3 != (FARPROC)0x0) {
                          pFVar3 = GetProcAddress(hModule,"hb_buffer_guess_segment_properties");
                          *(FARPROC *)(pauVar2[2] + 8) = pFVar3;
                          if (pFVar3 != (FARPROC)0x0) {
                            pFVar3 = GetProcAddress(hModule,"hb_face_create");
                            *(FARPROC *)(pauVar2[2] + 0x10) = pFVar3;
                            if (pFVar3 != (FARPROC)0x0) {
                              pFVar3 = GetProcAddress(hModule,"hb_face_create_for_tables");
                              *(FARPROC *)(pauVar2[2] + 0x18) = pFVar3;
                              if (pFVar3 != (FARPROC)0x0) {
                                pFVar3 = GetProcAddress(hModule,"hb_face_destroy");
                                *(FARPROC *)pauVar2[3] = pFVar3;
                                if (pFVar3 != (FARPROC)0x0) {
                                  pFVar3 = GetProcAddress(hModule,"hb_face_set_index");
                                  *(FARPROC *)(pauVar2[3] + 8) = pFVar3;
                                  if (pFVar3 != (FARPROC)0x0) {
                                    pFVar3 = GetProcAddress(hModule,"hb_face_set_upem");
                                    *(FARPROC *)(pauVar2[3] + 0x10) = pFVar3;
                                    if (pFVar3 != (FARPROC)0x0) {
                                      pFVar3 = GetProcAddress(hModule,"hb_font_create");
                                      *(FARPROC *)(pauVar2[3] + 0x18) = pFVar3;
                                      if (pFVar3 != (FARPROC)0x0) {
                                        pFVar3 = GetProcAddress(hModule,"hb_font_destroy");
                                        *(FARPROC *)pauVar2[4] = pFVar3;
                                        if (pFVar3 != (FARPROC)0x0) {
                                          pFVar3 = GetProcAddress(hModule,"hb_font_get_face");
                                          *(FARPROC *)(pauVar2[4] + 8) = pFVar3;
                                          if (pFVar3 != (FARPROC)0x0) {
                                            pFVar3 = GetProcAddress(hModule,"hb_font_set_scale");
                                            *(FARPROC *)(pauVar2[4] + 0x10) = pFVar3;
                                            if (pFVar3 != (FARPROC)0x0) {
                                              pFVar3 = GetProcAddress(hModule,
                                                  "hb_ot_layout_collect_lookups");
                                              *(FARPROC *)(pauVar2[4] + 0x18) = pFVar3;
                                              if (pFVar3 != (FARPROC)0x0) {
                                                pFVar3 = GetProcAddress(hModule,
                                                  "hb_ot_layout_lookup_collect_glyphs");
                                                *(FARPROC *)pauVar2[5] = pFVar3;
                                                if (pFVar3 != (FARPROC)0x0) {
                                                  pFVar3 = GetProcAddress(hModule,
                                                  "hb_ot_layout_lookup_would_substitute");
                                                  *(FARPROC *)(pauVar2[5] + 8) = pFVar3;
                                                  if (pFVar3 != (FARPROC)0x0) {
                                                    pFVar3 = GetProcAddress(hModule,
                                                  "hb_ot_tags_from_script_and_language");
                                                  *(FARPROC *)(pauVar2[5] + 0x10) = pFVar3;
                                                  if (pFVar3 != (FARPROC)0x0) {
                                                    pFVar3 = GetProcAddress(hModule,"hb_set_add");
                                                    *(FARPROC *)(pauVar2[5] + 0x18) = pFVar3;
                                                    if (pFVar3 != (FARPROC)0x0) {
                                                      pFVar3 = GetProcAddress(hModule,"hb_set_clear"
                                                                             );
                                                      *(FARPROC *)pauVar2[6] = pFVar3;
                                                      if (pFVar3 != (FARPROC)0x0) {
                                                        pFVar3 = GetProcAddress(hModule,
                                                  "hb_set_create");
                                                  *(FARPROC *)(pauVar2[6] + 8) = pFVar3;
                                                  if (pFVar3 != (FARPROC)0x0) {
                                                    pFVar3 = GetProcAddress(hModule,"hb_set_destroy"
                                                                           );
                                                    *(FARPROC *)(pauVar2[6] + 0x10) = pFVar3;
                                                    if (pFVar3 != (FARPROC)0x0) {
                                                      pFVar3 = GetProcAddress(hModule,"hb_set_del");
                                                      *(FARPROC *)(pauVar2[6] + 0x18) = pFVar3;
                                                      if (pFVar3 != (FARPROC)0x0) {
                                                        pFVar3 = GetProcAddress(hModule,"hb_set_has"
                                                                               );
                                                        *(FARPROC *)pauVar2[7] = pFVar3;
                                                        if (pFVar3 != (FARPROC)0x0) {
                                                          pFVar3 = GetProcAddress(hModule,
                                                  "hb_set_is_empty");
                                                  *(FARPROC *)(pauVar2[7] + 8) = pFVar3;
                                                  if (pFVar3 != (FARPROC)0x0) {
                                                    pFVar3 = GetProcAddress(hModule,"hb_set_next");
                                                    *(FARPROC *)(pauVar2[7] + 0x10) = pFVar3;
                                                    if (pFVar3 != (FARPROC)0x0) {
                                                      pFVar3 = GetProcAddress(hModule,
                                                  "hb_set_subtract");
                                                  *(FARPROC *)(pauVar2[7] + 0x18) = pFVar3;
                                                  if (pFVar3 != (FARPROC)0x0) {
                                                    pFVar3 = GetProcAddress(hModule,"hb_shape");
                                                    *(FARPROC *)pauVar2[8] = pFVar3;
                                                    if (pFVar3 != (FARPROC)0x0) {
                                                      pFVar3 = GetProcAddress(hModule,
                                                  "hb_version_atleast");
                                                  *(FARPROC *)(pauVar2[8] + 8) = pFVar3;
                                                  if (pFVar3 != (FARPROC)0x0) {
                                                    *(undefined1 (**) [32])(param_1 + 0x48) =
                                                         pauVar2;
                                                    goto LAB_1400397bd;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_14001c53d(lVar1,(longlong)pauVar2);
  }
LAB_1400397bd:
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStack_58);
}

