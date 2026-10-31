/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ebcf2 */

void FUN_1801ebcf2(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x48) = 0;
  puVar2 = (undefined8 *)FUN_1801c9a4b(uVar1,0x110,&local_2c);
  if (local_2c == 0) {
    FUN_1802a89a0(puVar2,0,0x110);
    hModule = LoadLibraryA("libharfbuzz-0.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar3 = GetProcAddress(hModule,"hb_version_atleast");
      if (pFVar3 != (FARPROC)0x0) {
        pFVar3 = GetProcAddress(hModule,"hb_blob_create");
        *puVar2 = pFVar3;
        if (pFVar3 != (FARPROC)0x0) {
          pFVar3 = GetProcAddress(hModule,"hb_blob_destroy");
          puVar2[1] = pFVar3;
          if (pFVar3 != (FARPROC)0x0) {
            pFVar3 = GetProcAddress(hModule,"hb_buffer_add_utf8");
            puVar2[2] = pFVar3;
            if (pFVar3 != (FARPROC)0x0) {
              pFVar3 = GetProcAddress(hModule,"hb_buffer_clear_contents");
              puVar2[3] = pFVar3;
              if (pFVar3 != (FARPROC)0x0) {
                pFVar3 = GetProcAddress(hModule,"hb_buffer_create");
                puVar2[4] = pFVar3;
                if (pFVar3 != (FARPROC)0x0) {
                  pFVar3 = GetProcAddress(hModule,"hb_buffer_destroy");
                  puVar2[5] = pFVar3;
                  if (pFVar3 != (FARPROC)0x0) {
                    pFVar3 = GetProcAddress(hModule,"hb_buffer_get_glyph_infos");
                    puVar2[6] = pFVar3;
                    if (pFVar3 != (FARPROC)0x0) {
                      pFVar3 = GetProcAddress(hModule,"hb_buffer_get_glyph_positions");
                      puVar2[7] = pFVar3;
                      if (pFVar3 != (FARPROC)0x0) {
                        pFVar3 = GetProcAddress(hModule,"hb_buffer_get_length");
                        puVar2[8] = pFVar3;
                        if (pFVar3 != (FARPROC)0x0) {
                          pFVar3 = GetProcAddress(hModule,"hb_buffer_guess_segment_properties");
                          puVar2[9] = pFVar3;
                          if (pFVar3 != (FARPROC)0x0) {
                            pFVar3 = GetProcAddress(hModule,"hb_face_create");
                            puVar2[10] = pFVar3;
                            if (pFVar3 != (FARPROC)0x0) {
                              pFVar3 = GetProcAddress(hModule,"hb_face_create_for_tables");
                              puVar2[0xb] = pFVar3;
                              if (pFVar3 != (FARPROC)0x0) {
                                pFVar3 = GetProcAddress(hModule,"hb_face_destroy");
                                puVar2[0xc] = pFVar3;
                                if (pFVar3 != (FARPROC)0x0) {
                                  pFVar3 = GetProcAddress(hModule,"hb_face_set_index");
                                  puVar2[0xd] = pFVar3;
                                  if (pFVar3 != (FARPROC)0x0) {
                                    pFVar3 = GetProcAddress(hModule,"hb_face_set_upem");
                                    puVar2[0xe] = pFVar3;
                                    if (pFVar3 != (FARPROC)0x0) {
                                      pFVar3 = GetProcAddress(hModule,"hb_font_create");
                                      puVar2[0xf] = pFVar3;
                                      if (pFVar3 != (FARPROC)0x0) {
                                        pFVar3 = GetProcAddress(hModule,"hb_font_destroy");
                                        puVar2[0x10] = pFVar3;
                                        if (pFVar3 != (FARPROC)0x0) {
                                          pFVar3 = GetProcAddress(hModule,"hb_font_get_face");
                                          puVar2[0x11] = pFVar3;
                                          if (pFVar3 != (FARPROC)0x0) {
                                            pFVar3 = GetProcAddress(hModule,"hb_font_set_scale");
                                            puVar2[0x12] = pFVar3;
                                            if (pFVar3 != (FARPROC)0x0) {
                                              pFVar3 = GetProcAddress(hModule,
                                                  "hb_ot_layout_collect_lookups");
                                              puVar2[0x13] = pFVar3;
                                              if (pFVar3 != (FARPROC)0x0) {
                                                pFVar3 = GetProcAddress(hModule,
                                                  "hb_ot_layout_lookup_collect_glyphs");
                                                puVar2[0x14] = pFVar3;
                                                if (pFVar3 != (FARPROC)0x0) {
                                                  pFVar3 = GetProcAddress(hModule,
                                                  "hb_ot_layout_lookup_would_substitute");
                                                  puVar2[0x15] = pFVar3;
                                                  if (pFVar3 != (FARPROC)0x0) {
                                                    pFVar3 = GetProcAddress(hModule,
                                                  "hb_ot_tags_from_script_and_language");
                                                  puVar2[0x16] = pFVar3;
                                                  if (pFVar3 != (FARPROC)0x0) {
                                                    pFVar3 = GetProcAddress(hModule,"hb_set_add");
                                                    puVar2[0x17] = pFVar3;
                                                    if (pFVar3 != (FARPROC)0x0) {
                                                      pFVar3 = GetProcAddress(hModule,"hb_set_clear"
                                                                             );
                                                      puVar2[0x18] = pFVar3;
                                                      if (pFVar3 != (FARPROC)0x0) {
                                                        pFVar3 = GetProcAddress(hModule,
                                                  "hb_set_create");
                                                  puVar2[0x19] = pFVar3;
                                                  if (pFVar3 != (FARPROC)0x0) {
                                                    pFVar3 = GetProcAddress(hModule,"hb_set_destroy"
                                                                           );
                                                    puVar2[0x1a] = pFVar3;
                                                    if (pFVar3 != (FARPROC)0x0) {
                                                      pFVar3 = GetProcAddress(hModule,"hb_set_del");
                                                      puVar2[0x1b] = pFVar3;
                                                      if (pFVar3 != (FARPROC)0x0) {
                                                        pFVar3 = GetProcAddress(hModule,"hb_set_has"
                                                                               );
                                                        puVar2[0x1c] = pFVar3;
                                                        if (pFVar3 != (FARPROC)0x0) {
                                                          pFVar3 = GetProcAddress(hModule,
                                                  "hb_set_is_empty");
                                                  puVar2[0x1d] = pFVar3;
                                                  if (pFVar3 != (FARPROC)0x0) {
                                                    pFVar3 = GetProcAddress(hModule,"hb_set_next");
                                                    puVar2[0x1e] = pFVar3;
                                                    if (pFVar3 != (FARPROC)0x0) {
                                                      pFVar3 = GetProcAddress(hModule,
                                                  "hb_set_subtract");
                                                  puVar2[0x1f] = pFVar3;
                                                  if (pFVar3 != (FARPROC)0x0) {
                                                    pFVar3 = GetProcAddress(hModule,"hb_shape");
                                                    puVar2[0x20] = pFVar3;
                                                    if (pFVar3 != (FARPROC)0x0) {
                                                      pFVar3 = GetProcAddress(hModule,
                                                  "hb_version_atleast");
                                                  puVar2[0x21] = pFVar3;
                                                  if (pFVar3 != (FARPROC)0x0) {
                                                    *(undefined8 **)(param_1 + 0x48) = puVar2;
                                                    goto LAB_1801ec189;
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
    FUN_1801c9b65(uVar1,puVar2);
  }
LAB_1801ec189:
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}

